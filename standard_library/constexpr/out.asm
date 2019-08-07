
a.out:     file format elf64-x86-64


Disassembly of section .init:

00000000000007b0 <_init>:
 7b0:	48 83 ec 08          	sub    $0x8,%rsp
 7b4:	48 8b 05 2d 18 20 00 	mov    0x20182d(%rip),%rax        # 201fe8 <__gmon_start__>
 7bb:	48 85 c0             	test   %rax,%rax
 7be:	74 02                	je     7c2 <_init+0x12>
 7c0:	ff d0                	callq  *%rax
 7c2:	48 83 c4 08          	add    $0x8,%rsp
 7c6:	c3                   	retq   

Disassembly of section .plt:

00000000000007d0 <.plt>:
 7d0:	ff 35 b2 17 20 00    	pushq  0x2017b2(%rip)        # 201f88 <_GLOBAL_OFFSET_TABLE_+0x8>
 7d6:	ff 25 b4 17 20 00    	jmpq   *0x2017b4(%rip)        # 201f90 <_GLOBAL_OFFSET_TABLE_+0x10>
 7dc:	0f 1f 40 00          	nopl   0x0(%rax)

00000000000007e0 <__cxa_atexit@plt>:
 7e0:	ff 25 b2 17 20 00    	jmpq   *0x2017b2(%rip)        # 201f98 <__cxa_atexit@GLIBC_2.2.5>
 7e6:	68 00 00 00 00       	pushq  $0x0
 7eb:	e9 e0 ff ff ff       	jmpq   7d0 <.plt>

00000000000007f0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>:
 7f0:	ff 25 aa 17 20 00    	jmpq   *0x2017aa(%rip)        # 201fa0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@GLIBCXX_3.4>
 7f6:	68 01 00 00 00       	pushq  $0x1
 7fb:	e9 d0 ff ff ff       	jmpq   7d0 <.plt>

0000000000000800 <_ZNSolsEPFRSoS_E@plt>:
 800:	ff 25 a2 17 20 00    	jmpq   *0x2017a2(%rip)        # 201fa8 <_ZNSolsEPFRSoS_E@GLIBCXX_3.4>
 806:	68 02 00 00 00       	pushq  $0x2
 80b:	e9 c0 ff ff ff       	jmpq   7d0 <.plt>

0000000000000810 <_ZNSt8ios_base4InitC1Ev@plt>:
 810:	ff 25 9a 17 20 00    	jmpq   *0x20179a(%rip)        # 201fb0 <_ZNSt8ios_base4InitC1Ev@GLIBCXX_3.4>
 816:	68 03 00 00 00       	pushq  $0x3
 81b:	e9 b0 ff ff ff       	jmpq   7d0 <.plt>

0000000000000820 <_ZNSolsEi@plt>:
 820:	ff 25 92 17 20 00    	jmpq   *0x201792(%rip)        # 201fb8 <_ZNSolsEi@GLIBCXX_3.4>
 826:	68 04 00 00 00       	pushq  $0x4
 82b:	e9 a0 ff ff ff       	jmpq   7d0 <.plt>

0000000000000830 <_ZNSolsEd@plt>:
 830:	ff 25 8a 17 20 00    	jmpq   *0x20178a(%rip)        # 201fc0 <_ZNSolsEd@GLIBCXX_3.4>
 836:	68 05 00 00 00       	pushq  $0x5
 83b:	e9 90 ff ff ff       	jmpq   7d0 <.plt>

Disassembly of section .plt.got:

0000000000000840 <__cxa_finalize@plt>:
 840:	ff 25 82 17 20 00    	jmpq   *0x201782(%rip)        # 201fc8 <__cxa_finalize@GLIBC_2.2.5>
 846:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

0000000000000850 <_start>:
 850:	31 ed                	xor    %ebp,%ebp
 852:	49 89 d1             	mov    %rdx,%r9
 855:	5e                   	pop    %rsi
 856:	48 89 e2             	mov    %rsp,%rdx
 859:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
 85d:	50                   	push   %rax
 85e:	54                   	push   %rsp
 85f:	4c 8d 05 5a 03 00 00 	lea    0x35a(%rip),%r8        # bc0 <__libc_csu_fini>
 866:	48 8d 0d e3 02 00 00 	lea    0x2e3(%rip),%rcx        # b50 <__libc_csu_init>
 86d:	48 8d 3d 24 01 00 00 	lea    0x124(%rip),%rdi        # 998 <main>
 874:	ff 15 66 17 20 00    	callq  *0x201766(%rip)        # 201fe0 <__libc_start_main@GLIBC_2.2.5>
 87a:	f4                   	hlt    
 87b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000000880 <deregister_tm_clones>:
 880:	48 8d 3d 89 17 20 00 	lea    0x201789(%rip),%rdi        # 202010 <__TMC_END__>
 887:	55                   	push   %rbp
 888:	48 8d 05 81 17 20 00 	lea    0x201781(%rip),%rax        # 202010 <__TMC_END__>
 88f:	48 39 f8             	cmp    %rdi,%rax
 892:	48 89 e5             	mov    %rsp,%rbp
 895:	74 19                	je     8b0 <deregister_tm_clones+0x30>
 897:	48 8b 05 3a 17 20 00 	mov    0x20173a(%rip),%rax        # 201fd8 <_ITM_deregisterTMCloneTable>
 89e:	48 85 c0             	test   %rax,%rax
 8a1:	74 0d                	je     8b0 <deregister_tm_clones+0x30>
 8a3:	5d                   	pop    %rbp
 8a4:	ff e0                	jmpq   *%rax
 8a6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 8ad:	00 00 00 
 8b0:	5d                   	pop    %rbp
 8b1:	c3                   	retq   
 8b2:	0f 1f 40 00          	nopl   0x0(%rax)
 8b6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 8bd:	00 00 00 

00000000000008c0 <register_tm_clones>:
 8c0:	48 8d 3d 49 17 20 00 	lea    0x201749(%rip),%rdi        # 202010 <__TMC_END__>
 8c7:	48 8d 35 42 17 20 00 	lea    0x201742(%rip),%rsi        # 202010 <__TMC_END__>
 8ce:	55                   	push   %rbp
 8cf:	48 29 fe             	sub    %rdi,%rsi
 8d2:	48 89 e5             	mov    %rsp,%rbp
 8d5:	48 c1 fe 03          	sar    $0x3,%rsi
 8d9:	48 89 f0             	mov    %rsi,%rax
 8dc:	48 c1 e8 3f          	shr    $0x3f,%rax
 8e0:	48 01 c6             	add    %rax,%rsi
 8e3:	48 d1 fe             	sar    %rsi
 8e6:	74 18                	je     900 <register_tm_clones+0x40>
 8e8:	48 8b 05 01 17 20 00 	mov    0x201701(%rip),%rax        # 201ff0 <_ITM_registerTMCloneTable>
 8ef:	48 85 c0             	test   %rax,%rax
 8f2:	74 0c                	je     900 <register_tm_clones+0x40>
 8f4:	5d                   	pop    %rbp
 8f5:	ff e0                	jmpq   *%rax
 8f7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
 8fe:	00 00 
 900:	5d                   	pop    %rbp
 901:	c3                   	retq   
 902:	0f 1f 40 00          	nopl   0x0(%rax)
 906:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 90d:	00 00 00 

0000000000000910 <__do_global_dtors_aux>:
 910:	80 3d 19 18 20 00 00 	cmpb   $0x0,0x201819(%rip)        # 202130 <completed.7697>
 917:	75 2f                	jne    948 <__do_global_dtors_aux+0x38>
 919:	48 83 3d a7 16 20 00 	cmpq   $0x0,0x2016a7(%rip)        # 201fc8 <__cxa_finalize@GLIBC_2.2.5>
 920:	00 
 921:	55                   	push   %rbp
 922:	48 89 e5             	mov    %rsp,%rbp
 925:	74 0c                	je     933 <__do_global_dtors_aux+0x23>
 927:	48 8b 3d da 16 20 00 	mov    0x2016da(%rip),%rdi        # 202008 <__dso_handle>
 92e:	e8 0d ff ff ff       	callq  840 <__cxa_finalize@plt>
 933:	e8 48 ff ff ff       	callq  880 <deregister_tm_clones>
 938:	c6 05 f1 17 20 00 01 	movb   $0x1,0x2017f1(%rip)        # 202130 <completed.7697>
 93f:	5d                   	pop    %rbp
 940:	c3                   	retq   
 941:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
 948:	f3 c3                	repz retq 
 94a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000000950 <frame_dummy>:
 950:	55                   	push   %rbp
 951:	48 89 e5             	mov    %rsp,%rbp
 954:	5d                   	pop    %rbp
 955:	e9 66 ff ff ff       	jmpq   8c0 <register_tm_clones>

000000000000095a <_Z9fibonaccii>:
 95a:	55                   	push   %rbp
 95b:	48 89 e5             	mov    %rsp,%rbp
 95e:	53                   	push   %rbx
 95f:	48 83 ec 18          	sub    $0x18,%rsp
 963:	89 7d ec             	mov    %edi,-0x14(%rbp)
 966:	83 7d ec 01          	cmpl   $0x1,-0x14(%rbp)
 96a:	7e 20                	jle    98c <_Z9fibonaccii+0x32>
 96c:	8b 45 ec             	mov    -0x14(%rbp),%eax
 96f:	83 e8 01             	sub    $0x1,%eax
 972:	89 c7                	mov    %eax,%edi
 974:	e8 e1 ff ff ff       	callq  95a <_Z9fibonaccii>
 979:	89 c3                	mov    %eax,%ebx
 97b:	8b 45 ec             	mov    -0x14(%rbp),%eax
 97e:	83 e8 02             	sub    $0x2,%eax
 981:	89 c7                	mov    %eax,%edi
 983:	e8 d2 ff ff ff       	callq  95a <_Z9fibonaccii>
 988:	01 d8                	add    %ebx,%eax
 98a:	eb 05                	jmp    991 <_Z9fibonaccii+0x37>
 98c:	b8 01 00 00 00       	mov    $0x1,%eax
 991:	48 83 c4 18          	add    $0x18,%rsp
 995:	5b                   	pop    %rbx
 996:	5d                   	pop    %rbp
 997:	c3                   	retq   

0000000000000998 <main>:
 998:	55                   	push   %rbp
 999:	48 89 e5             	mov    %rsp,%rbp
 99c:	48 83 ec 30          	sub    $0x30,%rsp
 9a0:	c7 45 f0 05 00 00 00 	movl   $0x5,-0x10(%rbp)
 9a7:	bf 05 00 00 00       	mov    $0x5,%edi
 9ac:	e8 a9 ff ff ff       	callq  95a <_Z9fibonaccii>
 9b1:	89 45 f4             	mov    %eax,-0xc(%rbp)
 9b4:	f2 0f 10 05 5c 02 00 	movsd  0x25c(%rip),%xmm0        # c18 <_ZStL19piecewise_construct+0x40>
 9bb:	00 
 9bc:	f2 0f 11 45 f8       	movsd  %xmm0,-0x8(%rbp)
 9c1:	48 8d 35 11 02 00 00 	lea    0x211(%rip),%rsi        # bd9 <_ZStL19piecewise_construct+0x1>
 9c8:	48 8d 3d 51 16 20 00 	lea    0x201651(%rip),%rdi        # 202020 <_ZSt4cout@@GLIBCXX_3.4>
 9cf:	e8 1c fe ff ff       	callq  7f0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
 9d4:	be 05 00 00 00       	mov    $0x5,%esi
 9d9:	48 89 c7             	mov    %rax,%rdi
 9dc:	e8 3f fe ff ff       	callq  820 <_ZNSolsEi@plt>
 9e1:	48 89 c2             	mov    %rax,%rdx
 9e4:	48 8b 05 e5 15 20 00 	mov    0x2015e5(%rip),%rax        # 201fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
 9eb:	48 89 c6             	mov    %rax,%rsi
 9ee:	48 89 d7             	mov    %rdx,%rdi
 9f1:	e8 0a fe ff ff       	callq  800 <_ZNSolsEPFRSoS_E@plt>
 9f6:	48 8d 35 e1 01 00 00 	lea    0x1e1(%rip),%rsi        # bde <_ZStL19piecewise_construct+0x6>
 9fd:	48 8d 3d 1c 16 20 00 	lea    0x20161c(%rip),%rdi        # 202020 <_ZSt4cout@@GLIBCXX_3.4>
 a04:	e8 e7 fd ff ff       	callq  7f0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
 a09:	48 89 c2             	mov    %rax,%rdx
 a0c:	8b 45 f4             	mov    -0xc(%rbp),%eax
 a0f:	89 c6                	mov    %eax,%esi
 a11:	48 89 d7             	mov    %rdx,%rdi
 a14:	e8 07 fe ff ff       	callq  820 <_ZNSolsEi@plt>
 a19:	48 89 c2             	mov    %rax,%rdx
 a1c:	48 8b 05 ad 15 20 00 	mov    0x2015ad(%rip),%rax        # 201fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
 a23:	48 89 c6             	mov    %rax,%rsi
 a26:	48 89 d7             	mov    %rdx,%rdi
 a29:	e8 d2 fd ff ff       	callq  800 <_ZNSolsEPFRSoS_E@plt>
 a2e:	48 8d 35 b3 01 00 00 	lea    0x1b3(%rip),%rsi        # be8 <_ZStL19piecewise_construct+0x10>
 a35:	48 8d 3d e4 15 20 00 	lea    0x2015e4(%rip),%rdi        # 202020 <_ZSt4cout@@GLIBCXX_3.4>
 a3c:	e8 af fd ff ff       	callq  7f0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
 a41:	48 89 c2             	mov    %rax,%rdx
 a44:	48 8b 05 cd 01 00 00 	mov    0x1cd(%rip),%rax        # c18 <_ZStL19piecewise_construct+0x40>
 a4b:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
 a4f:	f2 0f 10 45 d8       	movsd  -0x28(%rbp),%xmm0
 a54:	48 89 d7             	mov    %rdx,%rdi
 a57:	e8 d4 fd ff ff       	callq  830 <_ZNSolsEd@plt>
 a5c:	48 89 c2             	mov    %rax,%rdx
 a5f:	48 8b 05 6a 15 20 00 	mov    0x20156a(%rip),%rax        # 201fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
 a66:	48 89 c6             	mov    %rax,%rsi
 a69:	48 89 d7             	mov    %rdx,%rdi
 a6c:	e8 8f fd ff ff       	callq  800 <_ZNSolsEPFRSoS_E@plt>
 a71:	48 8d 35 75 01 00 00 	lea    0x175(%rip),%rsi        # bed <_ZStL19piecewise_construct+0x15>
 a78:	48 8d 3d a1 15 20 00 	lea    0x2015a1(%rip),%rdi        # 202020 <_ZSt4cout@@GLIBCXX_3.4>
 a7f:	e8 6c fd ff ff       	callq  7f0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
 a84:	be 05 00 00 00       	mov    $0x5,%esi
 a89:	48 89 c7             	mov    %rax,%rdi
 a8c:	e8 8f fd ff ff       	callq  820 <_ZNSolsEi@plt>
 a91:	48 89 c2             	mov    %rax,%rdx
 a94:	48 8b 05 35 15 20 00 	mov    0x201535(%rip),%rax        # 201fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
 a9b:	48 89 c6             	mov    %rax,%rsi
 a9e:	48 89 d7             	mov    %rdx,%rdi
 aa1:	e8 5a fd ff ff       	callq  800 <_ZNSolsEPFRSoS_E@plt>
 aa6:	48 8d 35 50 01 00 00 	lea    0x150(%rip),%rsi        # bfd <_ZStL19piecewise_construct+0x25>
 aad:	48 8d 3d 6c 15 20 00 	lea    0x20156c(%rip),%rdi        # 202020 <_ZSt4cout@@GLIBCXX_3.4>
 ab4:	e8 37 fd ff ff       	callq  7f0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
 ab9:	48 89 c2             	mov    %rax,%rdx
 abc:	48 8b 05 5d 01 00 00 	mov    0x15d(%rip),%rax        # c20 <_ZStL19piecewise_construct+0x48>
 ac3:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
 ac7:	f2 0f 10 45 d8       	movsd  -0x28(%rbp),%xmm0
 acc:	48 89 d7             	mov    %rdx,%rdi
 acf:	e8 5c fd ff ff       	callq  830 <_ZNSolsEd@plt>
 ad4:	48 89 c2             	mov    %rax,%rdx
 ad7:	48 8b 05 f2 14 20 00 	mov    0x2014f2(%rip),%rax        # 201fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
 ade:	48 89 c6             	mov    %rax,%rsi
 ae1:	48 89 d7             	mov    %rdx,%rdi
 ae4:	e8 17 fd ff ff       	callq  800 <_ZNSolsEPFRSoS_E@plt>
 ae9:	b8 00 00 00 00       	mov    $0x0,%eax
 aee:	c9                   	leaveq 
 aef:	c3                   	retq   

0000000000000af0 <_Z41__static_initialization_and_destruction_0ii>:
 af0:	55                   	push   %rbp
 af1:	48 89 e5             	mov    %rsp,%rbp
 af4:	48 83 ec 10          	sub    $0x10,%rsp
 af8:	89 7d fc             	mov    %edi,-0x4(%rbp)
 afb:	89 75 f8             	mov    %esi,-0x8(%rbp)
 afe:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
 b02:	75 32                	jne    b36 <_Z41__static_initialization_and_destruction_0ii+0x46>
 b04:	81 7d f8 ff ff 00 00 	cmpl   $0xffff,-0x8(%rbp)
 b0b:	75 29                	jne    b36 <_Z41__static_initialization_and_destruction_0ii+0x46>
 b0d:	48 8d 3d 1d 16 20 00 	lea    0x20161d(%rip),%rdi        # 202131 <_ZStL8__ioinit>
 b14:	e8 f7 fc ff ff       	callq  810 <_ZNSt8ios_base4InitC1Ev@plt>
 b19:	48 8d 15 e8 14 20 00 	lea    0x2014e8(%rip),%rdx        # 202008 <__dso_handle>
 b20:	48 8d 35 0a 16 20 00 	lea    0x20160a(%rip),%rsi        # 202131 <_ZStL8__ioinit>
 b27:	48 8b 05 ca 14 20 00 	mov    0x2014ca(%rip),%rax        # 201ff8 <_ZNSt8ios_base4InitD1Ev@GLIBCXX_3.4>
 b2e:	48 89 c7             	mov    %rax,%rdi
 b31:	e8 aa fc ff ff       	callq  7e0 <__cxa_atexit@plt>
 b36:	90                   	nop
 b37:	c9                   	leaveq 
 b38:	c3                   	retq   

0000000000000b39 <_GLOBAL__sub_I__Z9fibonaccii>:
 b39:	55                   	push   %rbp
 b3a:	48 89 e5             	mov    %rsp,%rbp
 b3d:	be ff ff 00 00       	mov    $0xffff,%esi
 b42:	bf 01 00 00 00       	mov    $0x1,%edi
 b47:	e8 a4 ff ff ff       	callq  af0 <_Z41__static_initialization_and_destruction_0ii>
 b4c:	5d                   	pop    %rbp
 b4d:	c3                   	retq   
 b4e:	66 90                	xchg   %ax,%ax

0000000000000b50 <__libc_csu_init>:
 b50:	41 57                	push   %r15
 b52:	41 56                	push   %r14
 b54:	49 89 d7             	mov    %rdx,%r15
 b57:	41 55                	push   %r13
 b59:	41 54                	push   %r12
 b5b:	4c 8d 25 06 12 20 00 	lea    0x201206(%rip),%r12        # 201d68 <__frame_dummy_init_array_entry>
 b62:	55                   	push   %rbp
 b63:	48 8d 2d 0e 12 20 00 	lea    0x20120e(%rip),%rbp        # 201d78 <__init_array_end>
 b6a:	53                   	push   %rbx
 b6b:	41 89 fd             	mov    %edi,%r13d
 b6e:	49 89 f6             	mov    %rsi,%r14
 b71:	4c 29 e5             	sub    %r12,%rbp
 b74:	48 83 ec 08          	sub    $0x8,%rsp
 b78:	48 c1 fd 03          	sar    $0x3,%rbp
 b7c:	e8 2f fc ff ff       	callq  7b0 <_init>
 b81:	48 85 ed             	test   %rbp,%rbp
 b84:	74 20                	je     ba6 <__libc_csu_init+0x56>
 b86:	31 db                	xor    %ebx,%ebx
 b88:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
 b8f:	00 
 b90:	4c 89 fa             	mov    %r15,%rdx
 b93:	4c 89 f6             	mov    %r14,%rsi
 b96:	44 89 ef             	mov    %r13d,%edi
 b99:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
 b9d:	48 83 c3 01          	add    $0x1,%rbx
 ba1:	48 39 dd             	cmp    %rbx,%rbp
 ba4:	75 ea                	jne    b90 <__libc_csu_init+0x40>
 ba6:	48 83 c4 08          	add    $0x8,%rsp
 baa:	5b                   	pop    %rbx
 bab:	5d                   	pop    %rbp
 bac:	41 5c                	pop    %r12
 bae:	41 5d                	pop    %r13
 bb0:	41 5e                	pop    %r14
 bb2:	41 5f                	pop    %r15
 bb4:	c3                   	retq   
 bb5:	90                   	nop
 bb6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 bbd:	00 00 00 

0000000000000bc0 <__libc_csu_fini>:
 bc0:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000000bc4 <_fini>:
 bc4:	48 83 ec 08          	sub    $0x8,%rsp
 bc8:	48 83 c4 08          	add    $0x8,%rsp
 bcc:	c3                   	retq   
