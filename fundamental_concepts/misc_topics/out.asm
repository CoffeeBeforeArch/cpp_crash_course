
modifier_deep_dive:     file format elf64-x86-64


Disassembly of section .init:

0000000000000920 <_init>:
 920:	48 83 ec 08          	sub    $0x8,%rsp
 924:	48 8b 05 bd 16 20 00 	mov    0x2016bd(%rip),%rax        # 201fe8 <__gmon_start__>
 92b:	48 85 c0             	test   %rax,%rax
 92e:	74 02                	je     932 <_init+0x12>
 930:	ff d0                	callq  *%rax
 932:	48 83 c4 08          	add    $0x8,%rsp
 936:	c3                   	retq   

Disassembly of section .plt:

0000000000000940 <.plt>:
 940:	ff 35 2a 16 20 00    	pushq  0x20162a(%rip)        # 201f70 <_GLOBAL_OFFSET_TABLE_+0x8>
 946:	ff 25 2c 16 20 00    	jmpq   *0x20162c(%rip)        # 201f78 <_GLOBAL_OFFSET_TABLE_+0x10>
 94c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000000950 <_ZNSo3putEc@plt>:
 950:	ff 25 2a 16 20 00    	jmpq   *0x20162a(%rip)        # 201f80 <_ZNSo3putEc@GLIBCXX_3.4>
 956:	68 00 00 00 00       	pushq  $0x0
 95b:	e9 e0 ff ff ff       	jmpq   940 <.plt>

0000000000000960 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@plt>:
 960:	ff 25 22 16 20 00    	jmpq   *0x201622(%rip)        # 201f88 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
 966:	68 01 00 00 00       	pushq  $0x1
 96b:	e9 d0 ff ff ff       	jmpq   940 <.plt>

0000000000000970 <_ZNSo5flushEv@plt>:
 970:	ff 25 1a 16 20 00    	jmpq   *0x20161a(%rip)        # 201f90 <_ZNSo5flushEv@GLIBCXX_3.4>
 976:	68 02 00 00 00       	pushq  $0x2
 97b:	e9 c0 ff ff ff       	jmpq   940 <.plt>

0000000000000980 <__cxa_atexit@plt>:
 980:	ff 25 12 16 20 00    	jmpq   *0x201612(%rip)        # 201f98 <__cxa_atexit@GLIBC_2.2.5>
 986:	68 03 00 00 00       	pushq  $0x3
 98b:	e9 b0 ff ff ff       	jmpq   940 <.plt>

0000000000000990 <_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@plt>:
 990:	ff 25 0a 16 20 00    	jmpq   *0x20160a(%rip)        # 201fa0 <_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@GLIBCXX_3.4.9>
 996:	68 04 00 00 00       	pushq  $0x4
 99b:	e9 a0 ff ff ff       	jmpq   940 <.plt>

00000000000009a0 <_ZNKSt5ctypeIcE13_M_widen_initEv@plt>:
 9a0:	ff 25 02 16 20 00    	jmpq   *0x201602(%rip)        # 201fa8 <_ZNKSt5ctypeIcE13_M_widen_initEv@GLIBCXX_3.4.11>
 9a6:	68 05 00 00 00       	pushq  $0x5
 9ab:	e9 90 ff ff ff       	jmpq   940 <.plt>

00000000000009b0 <_ZSt16__throw_bad_castv@plt>:
 9b0:	ff 25 fa 15 20 00    	jmpq   *0x2015fa(%rip)        # 201fb0 <_ZSt16__throw_bad_castv@GLIBCXX_3.4>
 9b6:	68 06 00 00 00       	pushq  $0x6
 9bb:	e9 80 ff ff ff       	jmpq   940 <.plt>

00000000000009c0 <_ZNSt8ios_base4InitC1Ev@plt>:
 9c0:	ff 25 f2 15 20 00    	jmpq   *0x2015f2(%rip)        # 201fb8 <_ZNSt8ios_base4InitC1Ev@GLIBCXX_3.4>
 9c6:	68 07 00 00 00       	pushq  $0x7
 9cb:	e9 70 ff ff ff       	jmpq   940 <.plt>

00000000000009d0 <_ZNSo9_M_insertIbEERSoT_@plt>:
 9d0:	ff 25 ea 15 20 00    	jmpq   *0x2015ea(%rip)        # 201fc0 <_ZNSo9_M_insertIbEERSoT_@GLIBCXX_3.4.9>
 9d6:	68 08 00 00 00       	pushq  $0x8
 9db:	e9 60 ff ff ff       	jmpq   940 <.plt>

00000000000009e0 <_ZNSolsEi@plt>:
 9e0:	ff 25 e2 15 20 00    	jmpq   *0x2015e2(%rip)        # 201fc8 <_ZNSolsEi@GLIBCXX_3.4>
 9e6:	68 09 00 00 00       	pushq  $0x9
 9eb:	e9 50 ff ff ff       	jmpq   940 <.plt>

Disassembly of section .plt.got:

00000000000009f0 <__cxa_finalize@plt>:
 9f0:	ff 25 da 15 20 00    	jmpq   *0x2015da(%rip)        # 201fd0 <__cxa_finalize@GLIBC_2.2.5>
 9f6:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

0000000000000a00 <main>:
 a00:	41 57                	push   %r15
 a02:	41 56                	push   %r14
 a04:	4c 8d 3d e5 04 00 00 	lea    0x4e5(%rip),%r15        # ef0 <_ZNKSt5ctypeIcE8do_widenEc>
 a0b:	41 55                	push   %r13
 a0d:	41 54                	push   %r12
 a0f:	4c 8d 35 6e 05 00 00 	lea    0x56e(%rip),%r14        # f84 <_IO_stdin_used+0x4>
 a16:	55                   	push   %rbp
 a17:	53                   	push   %rbx
 a18:	4c 8d 2d 01 16 20 00 	lea    0x201601(%rip),%r13        # 202020 <_ZSt4cout@@GLIBCXX_3.4>
 a1f:	41 bc 05 00 00 00    	mov    $0x5,%r12d
 a25:	48 83 ec 18          	sub    $0x18,%rsp
 a29:	ba 08 00 00 00       	mov    $0x8,%edx
 a2e:	4c 89 f6             	mov    %r14,%rsi
 a31:	4c 89 ef             	mov    %r13,%rdi
 a34:	e8 57 ff ff ff       	callq  990 <_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@plt>
 a39:	8b 35 f5 16 20 00    	mov    0x2016f5(%rip),%esi        # 202134 <_ZZ12static_countvE5count>
 a3f:	4c 89 ef             	mov    %r13,%rdi
 a42:	e8 99 ff ff ff       	callq  9e0 <_ZNSolsEi@plt>
 a47:	48 89 c5             	mov    %rax,%rbp
 a4a:	48 8b 00             	mov    (%rax),%rax
 a4d:	48 8b 40 e8          	mov    -0x18(%rax),%rax
 a51:	48 8b 9c 05 f0 00 00 	mov    0xf0(%rbp,%rax,1),%rbx
 a58:	00 
 a59:	48 85 db             	test   %rbx,%rbx
 a5c:	0f 84 a8 02 00 00    	je     d0a <main+0x30a>
 a62:	80 7b 38 00          	cmpb   $0x0,0x38(%rbx)
 a66:	0f 84 14 02 00 00    	je     c80 <main+0x280>
 a6c:	0f be 73 43          	movsbl 0x43(%rbx),%esi
 a70:	48 89 ef             	mov    %rbp,%rdi
 a73:	e8 d8 fe ff ff       	callq  950 <_ZNSo3putEc@plt>
 a78:	48 89 c7             	mov    %rax,%rdi
 a7b:	e8 f0 fe ff ff       	callq  970 <_ZNSo5flushEv@plt>
 a80:	83 05 ad 16 20 00 01 	addl   $0x1,0x2016ad(%rip)        # 202134 <_ZZ12static_countvE5count>
 a87:	41 83 ec 01          	sub    $0x1,%r12d
 a8b:	75 9c                	jne    a29 <main+0x29>
 a8d:	4c 8d 2d f9 04 00 00 	lea    0x4f9(%rip),%r13        # f8d <_IO_stdin_used+0xd>
 a94:	48 8d 2d 85 15 20 00 	lea    0x201585(%rip),%rbp        # 202020 <_ZSt4cout@@GLIBCXX_3.4>
 a9b:	4c 8d 35 4e 04 00 00 	lea    0x44e(%rip),%r14        # ef0 <_ZNKSt5ctypeIcE8do_widenEc>
 aa2:	45 31 e4             	xor    %r12d,%r12d
 aa5:	41 83 c4 01          	add    $0x1,%r12d
 aa9:	ba 18 00 00 00       	mov    $0x18,%edx
 aae:	4c 89 ee             	mov    %r13,%rsi
 ab1:	48 89 ef             	mov    %rbp,%rdi
 ab4:	e8 d7 fe ff ff       	callq  990 <_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@plt>
 ab9:	44 89 e6             	mov    %r12d,%esi
 abc:	48 89 ef             	mov    %rbp,%rdi
 abf:	e8 1c ff ff ff       	callq  9e0 <_ZNSolsEi@plt>
 ac4:	49 89 c7             	mov    %rax,%r15
 ac7:	48 8b 00             	mov    (%rax),%rax
 aca:	48 8b 40 e8          	mov    -0x18(%rax),%rax
 ace:	49 8b 9c 07 f0 00 00 	mov    0xf0(%r15,%rax,1),%rbx
 ad5:	00 
 ad6:	48 85 db             	test   %rbx,%rbx
 ad9:	0f 84 2b 02 00 00    	je     d0a <main+0x30a>
 adf:	80 7b 38 00          	cmpb   $0x0,0x38(%rbx)
 ae3:	0f 84 c7 01 00 00    	je     cb0 <main+0x2b0>
 ae9:	0f be 73 43          	movsbl 0x43(%rbx),%esi
 aed:	4c 89 ff             	mov    %r15,%rdi
 af0:	e8 5b fe ff ff       	callq  950 <_ZNSo3putEc@plt>
 af5:	48 89 c7             	mov    %rax,%rdi
 af8:	e8 73 fe ff ff       	callq  970 <_ZNSo5flushEv@plt>
 afd:	48 8d 35 a2 04 00 00 	lea    0x4a2(%rip),%rsi        # fa6 <_IO_stdin_used+0x26>
 b04:	ba 06 00 00 00       	mov    $0x6,%edx
 b09:	48 89 ef             	mov    %rbp,%rdi
 b0c:	e8 7f fe ff ff       	callq  990 <_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@plt>
 b11:	be 01 00 00 00       	mov    $0x1,%esi
 b16:	48 89 ef             	mov    %rbp,%rdi
 b19:	e8 b2 fe ff ff       	callq  9d0 <_ZNSo9_M_insertIbEERSoT_@plt>
 b1e:	49 89 c7             	mov    %rax,%r15
 b21:	48 8b 00             	mov    (%rax),%rax
 b24:	48 8b 40 e8          	mov    -0x18(%rax),%rax
 b28:	49 8b 9c 07 f0 00 00 	mov    0xf0(%r15,%rax,1),%rbx
 b2f:	00 
 b30:	48 85 db             	test   %rbx,%rbx
 b33:	0f 84 d1 01 00 00    	je     d0a <main+0x30a>
 b39:	80 7b 38 00          	cmpb   $0x0,0x38(%rbx)
 b3d:	0f 84 9d 01 00 00    	je     ce0 <main+0x2e0>
 b43:	0f be 73 43          	movsbl 0x43(%rbx),%esi
 b47:	4c 89 ff             	mov    %r15,%rdi
 b4a:	e8 01 fe ff ff       	callq  950 <_ZNSo3putEc@plt>
 b4f:	48 89 c7             	mov    %rax,%rdi
 b52:	e8 19 fe ff ff       	callq  970 <_ZNSo5flushEv@plt>
 b57:	41 83 fc 05          	cmp    $0x5,%r12d
 b5b:	0f 85 44 ff ff ff    	jne    aa5 <main+0xa5>
 b61:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%rsp)
 b68:	00 
 b69:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 b6d:	48 8d 35 39 04 00 00 	lea    0x439(%rip),%rsi        # fad <_IO_stdin_used+0x2d>
 b74:	48 8d 3d a5 14 20 00 	lea    0x2014a5(%rip),%rdi        # 202020 <_ZSt4cout@@GLIBCXX_3.4>
 b7b:	ba 0f 00 00 00       	mov    $0xf,%edx
 b80:	01 c0                	add    %eax,%eax
 b82:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 b86:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 b8a:	01 c0                	add    %eax,%eax
 b8c:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 b90:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 b94:	01 c0                	add    %eax,%eax
 b96:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 b9a:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 b9e:	01 c0                	add    %eax,%eax
 ba0:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 ba4:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 ba8:	01 c0                	add    %eax,%eax
 baa:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 bae:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 bb2:	01 c0                	add    %eax,%eax
 bb4:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 bb8:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 bbc:	01 c0                	add    %eax,%eax
 bbe:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 bc2:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 bc6:	01 c0                	add    %eax,%eax
 bc8:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 bcc:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 bd0:	01 c0                	add    %eax,%eax
 bd2:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 bd6:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 bda:	01 c0                	add    %eax,%eax
 bdc:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 be0:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 be4:	01 c0                	add    %eax,%eax
 be6:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 bea:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 bee:	01 c0                	add    %eax,%eax
 bf0:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 bf4:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 bf8:	01 c0                	add    %eax,%eax
 bfa:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 bfe:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 c02:	01 c0                	add    %eax,%eax
 c04:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 c08:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 c0c:	01 c0                	add    %eax,%eax
 c0e:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 c12:	8b 44 24 0c          	mov    0xc(%rsp),%eax
 c16:	01 c0                	add    %eax,%eax
 c18:	89 44 24 0c          	mov    %eax,0xc(%rsp)
 c1c:	e8 6f fd ff ff       	callq  990 <_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@plt>
 c21:	48 8d 3d f8 13 20 00 	lea    0x2013f8(%rip),%rdi        # 202020 <_ZSt4cout@@GLIBCXX_3.4>
 c28:	be 00 00 01 00       	mov    $0x10000,%esi
 c2d:	e8 ae fd ff ff       	callq  9e0 <_ZNSolsEi@plt>
 c32:	48 89 c7             	mov    %rax,%rdi
 c35:	e8 26 fd ff ff       	callq  960 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@plt>
 c3a:	48 8d 35 70 03 00 00 	lea    0x370(%rip),%rsi        # fb1 <_IO_stdin_used+0x31>
 c41:	48 8d 3d d8 13 20 00 	lea    0x2013d8(%rip),%rdi        # 202020 <_ZSt4cout@@GLIBCXX_3.4>
 c48:	ba 0b 00 00 00       	mov    $0xb,%edx
 c4d:	e8 3e fd ff ff       	callq  990 <_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@plt>
 c52:	8b 74 24 0c          	mov    0xc(%rsp),%esi
 c56:	48 8d 3d c3 13 20 00 	lea    0x2013c3(%rip),%rdi        # 202020 <_ZSt4cout@@GLIBCXX_3.4>
 c5d:	e8 7e fd ff ff       	callq  9e0 <_ZNSolsEi@plt>
 c62:	48 89 c7             	mov    %rax,%rdi
 c65:	e8 f6 fc ff ff       	callq  960 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@plt>
 c6a:	48 83 c4 18          	add    $0x18,%rsp
 c6e:	31 c0                	xor    %eax,%eax
 c70:	5b                   	pop    %rbx
 c71:	5d                   	pop    %rbp
 c72:	41 5c                	pop    %r12
 c74:	41 5d                	pop    %r13
 c76:	41 5e                	pop    %r14
 c78:	41 5f                	pop    %r15
 c7a:	c3                   	retq   
 c7b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
 c80:	48 89 df             	mov    %rbx,%rdi
 c83:	e8 18 fd ff ff       	callq  9a0 <_ZNKSt5ctypeIcE13_M_widen_initEv@plt>
 c88:	48 8b 03             	mov    (%rbx),%rax
 c8b:	be 0a 00 00 00       	mov    $0xa,%esi
 c90:	48 8b 40 30          	mov    0x30(%rax),%rax
 c94:	4c 39 f8             	cmp    %r15,%rax
 c97:	0f 84 d3 fd ff ff    	je     a70 <main+0x70>
 c9d:	48 89 df             	mov    %rbx,%rdi
 ca0:	ff d0                	callq  *%rax
 ca2:	0f be f0             	movsbl %al,%esi
 ca5:	e9 c6 fd ff ff       	jmpq   a70 <main+0x70>
 caa:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
 cb0:	48 89 df             	mov    %rbx,%rdi
 cb3:	e8 e8 fc ff ff       	callq  9a0 <_ZNKSt5ctypeIcE13_M_widen_initEv@plt>
 cb8:	48 8b 03             	mov    (%rbx),%rax
 cbb:	be 0a 00 00 00       	mov    $0xa,%esi
 cc0:	48 8b 40 30          	mov    0x30(%rax),%rax
 cc4:	4c 39 f0             	cmp    %r14,%rax
 cc7:	0f 84 20 fe ff ff    	je     aed <main+0xed>
 ccd:	48 89 df             	mov    %rbx,%rdi
 cd0:	ff d0                	callq  *%rax
 cd2:	0f be f0             	movsbl %al,%esi
 cd5:	e9 13 fe ff ff       	jmpq   aed <main+0xed>
 cda:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
 ce0:	48 89 df             	mov    %rbx,%rdi
 ce3:	e8 b8 fc ff ff       	callq  9a0 <_ZNKSt5ctypeIcE13_M_widen_initEv@plt>
 ce8:	48 8b 03             	mov    (%rbx),%rax
 ceb:	be 0a 00 00 00       	mov    $0xa,%esi
 cf0:	48 8b 40 30          	mov    0x30(%rax),%rax
 cf4:	4c 39 f0             	cmp    %r14,%rax
 cf7:	0f 84 4a fe ff ff    	je     b47 <main+0x147>
 cfd:	48 89 df             	mov    %rbx,%rdi
 d00:	ff d0                	callq  *%rax
 d02:	0f be f0             	movsbl %al,%esi
 d05:	e9 3d fe ff ff       	jmpq   b47 <main+0x147>
 d0a:	e8 a1 fc ff ff       	callq  9b0 <_ZSt16__throw_bad_castv@plt>
 d0f:	90                   	nop

0000000000000d10 <_GLOBAL__sub_I__Z12static_countv>:
 d10:	48 8d 3d 21 14 20 00 	lea    0x201421(%rip),%rdi        # 202138 <_ZStL8__ioinit>
 d17:	48 83 ec 08          	sub    $0x8,%rsp
 d1b:	e8 a0 fc ff ff       	callq  9c0 <_ZNSt8ios_base4InitC1Ev@plt>
 d20:	48 8b 3d d1 12 20 00 	mov    0x2012d1(%rip),%rdi        # 201ff8 <_ZNSt8ios_base4InitD1Ev@GLIBCXX_3.4>
 d27:	48 8d 15 da 12 20 00 	lea    0x2012da(%rip),%rdx        # 202008 <__dso_handle>
 d2e:	48 8d 35 03 14 20 00 	lea    0x201403(%rip),%rsi        # 202138 <_ZStL8__ioinit>
 d35:	48 83 c4 08          	add    $0x8,%rsp
 d39:	e9 42 fc ff ff       	jmpq   980 <__cxa_atexit@plt>
 d3e:	66 90                	xchg   %ax,%ax

0000000000000d40 <_start>:
 d40:	31 ed                	xor    %ebp,%ebp
 d42:	49 89 d1             	mov    %rdx,%r9
 d45:	5e                   	pop    %rsi
 d46:	48 89 e2             	mov    %rsp,%rdx
 d49:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
 d4d:	50                   	push   %rax
 d4e:	54                   	push   %rsp
 d4f:	4c 8d 05 1a 02 00 00 	lea    0x21a(%rip),%r8        # f70 <__libc_csu_fini>
 d56:	48 8d 0d a3 01 00 00 	lea    0x1a3(%rip),%rcx        # f00 <__libc_csu_init>
 d5d:	48 8d 3d 9c fc ff ff 	lea    -0x364(%rip),%rdi        # a00 <main>
 d64:	ff 15 76 12 20 00    	callq  *0x201276(%rip)        # 201fe0 <__libc_start_main@GLIBC_2.2.5>
 d6a:	f4                   	hlt    
 d6b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000000d70 <deregister_tm_clones>:
 d70:	48 8d 3d 99 12 20 00 	lea    0x201299(%rip),%rdi        # 202010 <__TMC_END__>
 d77:	55                   	push   %rbp
 d78:	48 8d 05 91 12 20 00 	lea    0x201291(%rip),%rax        # 202010 <__TMC_END__>
 d7f:	48 39 f8             	cmp    %rdi,%rax
 d82:	48 89 e5             	mov    %rsp,%rbp
 d85:	74 19                	je     da0 <deregister_tm_clones+0x30>
 d87:	48 8b 05 4a 12 20 00 	mov    0x20124a(%rip),%rax        # 201fd8 <_ITM_deregisterTMCloneTable>
 d8e:	48 85 c0             	test   %rax,%rax
 d91:	74 0d                	je     da0 <deregister_tm_clones+0x30>
 d93:	5d                   	pop    %rbp
 d94:	ff e0                	jmpq   *%rax
 d96:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 d9d:	00 00 00 
 da0:	5d                   	pop    %rbp
 da1:	c3                   	retq   
 da2:	0f 1f 40 00          	nopl   0x0(%rax)
 da6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 dad:	00 00 00 

0000000000000db0 <register_tm_clones>:
 db0:	48 8d 3d 59 12 20 00 	lea    0x201259(%rip),%rdi        # 202010 <__TMC_END__>
 db7:	48 8d 35 52 12 20 00 	lea    0x201252(%rip),%rsi        # 202010 <__TMC_END__>
 dbe:	55                   	push   %rbp
 dbf:	48 29 fe             	sub    %rdi,%rsi
 dc2:	48 89 e5             	mov    %rsp,%rbp
 dc5:	48 c1 fe 03          	sar    $0x3,%rsi
 dc9:	48 89 f0             	mov    %rsi,%rax
 dcc:	48 c1 e8 3f          	shr    $0x3f,%rax
 dd0:	48 01 c6             	add    %rax,%rsi
 dd3:	48 d1 fe             	sar    %rsi
 dd6:	74 18                	je     df0 <register_tm_clones+0x40>
 dd8:	48 8b 05 11 12 20 00 	mov    0x201211(%rip),%rax        # 201ff0 <_ITM_registerTMCloneTable>
 ddf:	48 85 c0             	test   %rax,%rax
 de2:	74 0c                	je     df0 <register_tm_clones+0x40>
 de4:	5d                   	pop    %rbp
 de5:	ff e0                	jmpq   *%rax
 de7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
 dee:	00 00 
 df0:	5d                   	pop    %rbp
 df1:	c3                   	retq   
 df2:	0f 1f 40 00          	nopl   0x0(%rax)
 df6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 dfd:	00 00 00 

0000000000000e00 <__do_global_dtors_aux>:
 e00:	80 3d 29 13 20 00 00 	cmpb   $0x0,0x201329(%rip)        # 202130 <completed.7696>
 e07:	75 2f                	jne    e38 <__do_global_dtors_aux+0x38>
 e09:	48 83 3d bf 11 20 00 	cmpq   $0x0,0x2011bf(%rip)        # 201fd0 <__cxa_finalize@GLIBC_2.2.5>
 e10:	00 
 e11:	55                   	push   %rbp
 e12:	48 89 e5             	mov    %rsp,%rbp
 e15:	74 0c                	je     e23 <__do_global_dtors_aux+0x23>
 e17:	48 8b 3d ea 11 20 00 	mov    0x2011ea(%rip),%rdi        # 202008 <__dso_handle>
 e1e:	e8 cd fb ff ff       	callq  9f0 <__cxa_finalize@plt>
 e23:	e8 48 ff ff ff       	callq  d70 <deregister_tm_clones>
 e28:	c6 05 01 13 20 00 01 	movb   $0x1,0x201301(%rip)        # 202130 <completed.7696>
 e2f:	5d                   	pop    %rbp
 e30:	c3                   	retq   
 e31:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
 e38:	f3 c3                	repz retq 
 e3a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000000e40 <frame_dummy>:
 e40:	55                   	push   %rbp
 e41:	48 89 e5             	mov    %rsp,%rbp
 e44:	5d                   	pop    %rbp
 e45:	e9 66 ff ff ff       	jmpq   db0 <register_tm_clones>
 e4a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000000e50 <_Z12static_countv>:
 e50:	55                   	push   %rbp
 e51:	53                   	push   %rbx
 e52:	48 8d 35 2b 01 00 00 	lea    0x12b(%rip),%rsi        # f84 <_IO_stdin_used+0x4>
 e59:	48 8d 3d c0 11 20 00 	lea    0x2011c0(%rip),%rdi        # 202020 <_ZSt4cout@@GLIBCXX_3.4>
 e60:	ba 08 00 00 00       	mov    $0x8,%edx
 e65:	48 83 ec 08          	sub    $0x8,%rsp
 e69:	e8 22 fb ff ff       	callq  990 <_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@plt>
 e6e:	8b 35 c0 12 20 00    	mov    0x2012c0(%rip),%esi        # 202134 <_ZZ12static_countvE5count>
 e74:	48 8d 3d a5 11 20 00 	lea    0x2011a5(%rip),%rdi        # 202020 <_ZSt4cout@@GLIBCXX_3.4>
 e7b:	e8 60 fb ff ff       	callq  9e0 <_ZNSolsEi@plt>
 e80:	48 89 c5             	mov    %rax,%rbp
 e83:	48 8b 00             	mov    (%rax),%rax
 e86:	48 8b 40 e8          	mov    -0x18(%rax),%rax
 e8a:	48 8b 9c 05 f0 00 00 	mov    0xf0(%rbp,%rax,1),%rbx
 e91:	00 
 e92:	48 85 db             	test   %rbx,%rbx
 e95:	74 53                	je     eea <_Z12static_countv+0x9a>
 e97:	80 7b 38 00          	cmpb   $0x0,0x38(%rbx)
 e9b:	74 23                	je     ec0 <_Z12static_countv+0x70>
 e9d:	0f be 73 43          	movsbl 0x43(%rbx),%esi
 ea1:	48 89 ef             	mov    %rbp,%rdi
 ea4:	e8 a7 fa ff ff       	callq  950 <_ZNSo3putEc@plt>
 ea9:	48 89 c7             	mov    %rax,%rdi
 eac:	e8 bf fa ff ff       	callq  970 <_ZNSo5flushEv@plt>
 eb1:	83 05 7c 12 20 00 01 	addl   $0x1,0x20127c(%rip)        # 202134 <_ZZ12static_countvE5count>
 eb8:	48 83 c4 08          	add    $0x8,%rsp
 ebc:	5b                   	pop    %rbx
 ebd:	5d                   	pop    %rbp
 ebe:	c3                   	retq   
 ebf:	90                   	nop
 ec0:	48 89 df             	mov    %rbx,%rdi
 ec3:	e8 d8 fa ff ff       	callq  9a0 <_ZNKSt5ctypeIcE13_M_widen_initEv@plt>
 ec8:	48 8b 03             	mov    (%rbx),%rax
 ecb:	48 8d 15 1e 00 00 00 	lea    0x1e(%rip),%rdx        # ef0 <_ZNKSt5ctypeIcE8do_widenEc>
 ed2:	be 0a 00 00 00       	mov    $0xa,%esi
 ed7:	48 8b 40 30          	mov    0x30(%rax),%rax
 edb:	48 39 d0             	cmp    %rdx,%rax
 ede:	74 c1                	je     ea1 <_Z12static_countv+0x51>
 ee0:	48 89 df             	mov    %rbx,%rdi
 ee3:	ff d0                	callq  *%rax
 ee5:	0f be f0             	movsbl %al,%esi
 ee8:	eb b7                	jmp    ea1 <_Z12static_countv+0x51>
 eea:	e8 c1 fa ff ff       	callq  9b0 <_ZSt16__throw_bad_castv@plt>
 eef:	90                   	nop

0000000000000ef0 <_ZNKSt5ctypeIcE8do_widenEc>:
 ef0:	89 f0                	mov    %esi,%eax
 ef2:	c3                   	retq   
 ef3:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 efa:	00 00 00 
 efd:	0f 1f 00             	nopl   (%rax)

0000000000000f00 <__libc_csu_init>:
 f00:	41 57                	push   %r15
 f02:	41 56                	push   %r14
 f04:	49 89 d7             	mov    %rdx,%r15
 f07:	41 55                	push   %r13
 f09:	41 54                	push   %r12
 f0b:	4c 8d 25 3e 0e 20 00 	lea    0x200e3e(%rip),%r12        # 201d50 <__frame_dummy_init_array_entry>
 f12:	55                   	push   %rbp
 f13:	48 8d 2d 46 0e 20 00 	lea    0x200e46(%rip),%rbp        # 201d60 <__init_array_end>
 f1a:	53                   	push   %rbx
 f1b:	41 89 fd             	mov    %edi,%r13d
 f1e:	49 89 f6             	mov    %rsi,%r14
 f21:	4c 29 e5             	sub    %r12,%rbp
 f24:	48 83 ec 08          	sub    $0x8,%rsp
 f28:	48 c1 fd 03          	sar    $0x3,%rbp
 f2c:	e8 ef f9 ff ff       	callq  920 <_init>
 f31:	48 85 ed             	test   %rbp,%rbp
 f34:	74 20                	je     f56 <__libc_csu_init+0x56>
 f36:	31 db                	xor    %ebx,%ebx
 f38:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
 f3f:	00 
 f40:	4c 89 fa             	mov    %r15,%rdx
 f43:	4c 89 f6             	mov    %r14,%rsi
 f46:	44 89 ef             	mov    %r13d,%edi
 f49:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
 f4d:	48 83 c3 01          	add    $0x1,%rbx
 f51:	48 39 dd             	cmp    %rbx,%rbp
 f54:	75 ea                	jne    f40 <__libc_csu_init+0x40>
 f56:	48 83 c4 08          	add    $0x8,%rsp
 f5a:	5b                   	pop    %rbx
 f5b:	5d                   	pop    %rbp
 f5c:	41 5c                	pop    %r12
 f5e:	41 5d                	pop    %r13
 f60:	41 5e                	pop    %r14
 f62:	41 5f                	pop    %r15
 f64:	c3                   	retq   
 f65:	90                   	nop
 f66:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 f6d:	00 00 00 

0000000000000f70 <__libc_csu_fini>:
 f70:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000000f74 <_fini>:
 f74:	48 83 ec 08          	sub    $0x8,%rsp
 f78:	48 83 c4 08          	add    $0x8,%rsp
 f7c:	c3                   	retq   
