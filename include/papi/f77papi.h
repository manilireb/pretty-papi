!
!  This file contains defines required by the PAPI Fortran interface.
!  It is automagically generated by genpapifdef.c
!  DO NOT modify its contents and expect the changes to stick.
!  Changes MUST be made in genpapifdef.c instead.
!


!
!  General purpose defines.
!

      INTEGER PAPI_NULL         
      PARAMETER (PAPI_NULL=-1)
      INTEGER PAPI_VER_CURRENT  
      PARAMETER (PAPI_VER_CURRENT=100663296)
      INTEGER PAPI_VERSION      
      PARAMETER (PAPI_VERSION=100663297)
      INTEGER PAPI_MAX_PRESET_EVENTS
      PARAMETER (PAPI_MAX_PRESET_EVENTS=128)
      INTEGER PAPI_NOT_INITED   
      PARAMETER (PAPI_NOT_INITED=0)
      INTEGER PAPI_LOW_LEVEL_INITED
      PARAMETER (PAPI_LOW_LEVEL_INITED=1)
      INTEGER PAPI_HIGH_LEVEL_INITED
      PARAMETER (PAPI_HIGH_LEVEL_INITED=2)
      INTEGER PAPI_THREAD_LEVEL_INITED
      PARAMETER (PAPI_THREAD_LEVEL_INITED=4)
      INTEGER PAPI_DOM_USER     
      PARAMETER (PAPI_DOM_USER=1)
      INTEGER PAPI_DOM_KERNEL   
      PARAMETER (PAPI_DOM_KERNEL=2)
      INTEGER PAPI_DOM_OTHER    
      PARAMETER (PAPI_DOM_OTHER=4)
      INTEGER PAPI_DOM_SUPERVISOR
      PARAMETER (PAPI_DOM_SUPERVISOR=8)
      INTEGER PAPI_DOM_ALL      
      PARAMETER (PAPI_DOM_ALL=15)
      INTEGER PAPI_DOM_MIN      
      PARAMETER (PAPI_DOM_MIN=1)
      INTEGER PAPI_DOM_MAX      
      PARAMETER (PAPI_DOM_MAX=15)
      INTEGER PAPI_DOM_HWSPEC   
      PARAMETER (PAPI_DOM_HWSPEC=((-2147483647) - 1))
      INTEGER PAPI_STOPPED      
      PARAMETER (PAPI_STOPPED=1)
      INTEGER PAPI_RUNNING      
      PARAMETER (PAPI_RUNNING=2)
      INTEGER PAPI_PAUSED       
      PARAMETER (PAPI_PAUSED=4)
      INTEGER PAPI_NOT_INIT     
      PARAMETER (PAPI_NOT_INIT=8)
      INTEGER PAPI_OVERFLOWING  
      PARAMETER (PAPI_OVERFLOWING=16)
      INTEGER PAPI_PROFILING    
      PARAMETER (PAPI_PROFILING=32)
      INTEGER PAPI_MULTIPLEXING 
      PARAMETER (PAPI_MULTIPLEXING=64)
      INTEGER PAPI_ATTACHED     
      PARAMETER (PAPI_ATTACHED=128)
      INTEGER PAPI_CPU_ATTACHED 
      PARAMETER (PAPI_CPU_ATTACHED=256)
      INTEGER PAPI_QUIET        
      PARAMETER (PAPI_QUIET=0)
      INTEGER PAPI_VERB_ECONT   
      PARAMETER (PAPI_VERB_ECONT=1)
      INTEGER PAPI_VERB_ESTOP   
      PARAMETER (PAPI_VERB_ESTOP=2)
      INTEGER PAPI_MIN_STR_LEN  
      PARAMETER (PAPI_MIN_STR_LEN=64)
      INTEGER PAPI_HUGE_STR_LEN 
      PARAMETER (PAPI_HUGE_STR_LEN=1024)
      INTEGER PAPI_MAX_STR_LEN  
      PARAMETER (PAPI_MAX_STR_LEN=128)
      INTEGER PAPI_NUM_ERRORS   
      PARAMETER (PAPI_NUM_ERRORS=27)
      INTEGER PAPI_MULTIPLEX_DEFAULT
      PARAMETER (PAPI_MULTIPLEX_DEFAULT=0)
      INTEGER PAPI_MULTIPLEX_FORCE_SW
      PARAMETER (PAPI_MULTIPLEX_FORCE_SW=1)
      INTEGER PAPI_DEBUG        
      PARAMETER (PAPI_DEBUG=2)
      INTEGER PAPI_MULTIPLEX    
      PARAMETER (PAPI_MULTIPLEX=3)
      INTEGER PAPI_DEFDOM       
      PARAMETER (PAPI_DEFDOM=4)
      INTEGER PAPI_DOMAIN       
      PARAMETER (PAPI_DOMAIN=5)
      INTEGER PAPI_DEFGRN       
      PARAMETER (PAPI_DEFGRN=6)
      INTEGER PAPI_GRANUL       
      PARAMETER (PAPI_GRANUL=7)
      INTEGER PAPI_DEF_MPX_NS   
      PARAMETER (PAPI_DEF_MPX_NS=8)
      INTEGER PAPI_MAX_MPX_CTRS 
      PARAMETER (PAPI_MAX_MPX_CTRS=11)
      INTEGER PAPI_PROFIL       
      PARAMETER (PAPI_PROFIL=12)
      INTEGER PAPI_PRELOAD      
      PARAMETER (PAPI_PRELOAD=13)
      INTEGER PAPI_CLOCKRATE    
      PARAMETER (PAPI_CLOCKRATE=14)
      INTEGER PAPI_MAX_HWCTRS   
      PARAMETER (PAPI_MAX_HWCTRS=15)
      INTEGER PAPI_HWINFO       
      PARAMETER (PAPI_HWINFO=16)
      INTEGER PAPI_EXEINFO      
      PARAMETER (PAPI_EXEINFO=17)
      INTEGER PAPI_MAX_CPUS     
      PARAMETER (PAPI_MAX_CPUS=18)
      INTEGER PAPI_ATTACH       
      PARAMETER (PAPI_ATTACH=19)
      INTEGER PAPI_SHLIBINFO    
      PARAMETER (PAPI_SHLIBINFO=20)
      INTEGER PAPI_LIB_VERSION  
      PARAMETER (PAPI_LIB_VERSION=21)
      INTEGER PAPI_COMPONENTINFO
      PARAMETER (PAPI_COMPONENTINFO=22)
      INTEGER PAPI_DETACH       
      PARAMETER (PAPI_DETACH=1)
      INTEGER PAPI_GRN_THR      
      PARAMETER (PAPI_GRN_THR=1)
      INTEGER PAPI_GRN_MIN      
      PARAMETER (PAPI_GRN_MIN=1)
      INTEGER PAPI_GRN_PROC     
      PARAMETER (PAPI_GRN_PROC=2)
      INTEGER PAPI_GRN_PROCG    
      PARAMETER (PAPI_GRN_PROCG=4)
      INTEGER PAPI_GRN_SYS      
      PARAMETER (PAPI_GRN_SYS=8)
      INTEGER PAPI_GRN_SYS_CPU  
      PARAMETER (PAPI_GRN_SYS_CPU=16)
      INTEGER PAPI_GRN_MAX      
      PARAMETER (PAPI_GRN_MAX=16)
      INTEGER PAPI_DERIVED      
      PARAMETER (PAPI_DERIVED=1)
      INTEGER PAPI_PROFIL_POSIX 
      PARAMETER (PAPI_PROFIL_POSIX=0)
      INTEGER PAPI_PROFIL_RANDOM
      PARAMETER (PAPI_PROFIL_RANDOM=1)
      INTEGER PAPI_PROFIL_WEIGHTED
      PARAMETER (PAPI_PROFIL_WEIGHTED=2)
      INTEGER PAPI_PROFIL_COMPRESS
      PARAMETER (PAPI_PROFIL_COMPRESS=4)
      INTEGER PAPI_PROFIL_BUCKET_16
      PARAMETER (PAPI_PROFIL_BUCKET_16=8)
      INTEGER PAPI_PROFIL_BUCKET_32
      PARAMETER (PAPI_PROFIL_BUCKET_32=16)
      INTEGER PAPI_PROFIL_BUCKET_64
      PARAMETER (PAPI_PROFIL_BUCKET_64=32)
      INTEGER PAPI_USR1_LOCK    
      PARAMETER (PAPI_USR1_LOCK=0)
      INTEGER PAPI_USR2_LOCK    
      PARAMETER (PAPI_USR2_LOCK=1)
      INTEGER PAPI_LOCK_USR1    
      PARAMETER (PAPI_LOCK_USR1=0)
      INTEGER PAPI_LOCK_USR2    
      PARAMETER (PAPI_LOCK_USR2=1)
      INTEGER PAPI_LOCK_NUM     
      PARAMETER (PAPI_LOCK_NUM=2)
      INTEGER PAPI_MH_MAX_LEVELS
      PARAMETER (PAPI_MH_MAX_LEVELS=6)
      INTEGER PAPI_USR1_TLS     
      PARAMETER (PAPI_USR1_TLS=0)
      INTEGER PAPI_USR2_TLS     
      PARAMETER (PAPI_USR2_TLS=1)
      INTEGER PAPI_TLS_USR1     
      PARAMETER (PAPI_TLS_USR1=0)
      INTEGER PAPI_TLS_USR2     
      PARAMETER (PAPI_TLS_USR2=1)
      INTEGER PAPI_TLS_HIGH_LEVEL
      PARAMETER (PAPI_TLS_HIGH_LEVEL=2)
      INTEGER PAPI_TLS_NUM      
      PARAMETER (PAPI_TLS_NUM=3)
      INTEGER PAPIF_DMEM_VMSIZE 
      PARAMETER (PAPIF_DMEM_VMSIZE=2)
      INTEGER PAPIF_DMEM_RESIDENT
      PARAMETER (PAPIF_DMEM_RESIDENT=3)
      INTEGER PAPIF_DMEM_HIGH_WATER
      PARAMETER (PAPIF_DMEM_HIGH_WATER=4)
      INTEGER PAPIF_DMEM_SHARED 
      PARAMETER (PAPIF_DMEM_SHARED=5)
      INTEGER PAPIF_DMEM_TEXT   
      PARAMETER (PAPIF_DMEM_TEXT=6)
      INTEGER PAPIF_DMEM_LIBRARY
      PARAMETER (PAPIF_DMEM_LIBRARY=7)
      INTEGER PAPIF_DMEM_HEAP   
      PARAMETER (PAPIF_DMEM_HEAP=8)
      INTEGER PAPIF_DMEM_LOCKED 
      PARAMETER (PAPIF_DMEM_LOCKED=9)
      INTEGER PAPIF_DMEM_STACK  
      PARAMETER (PAPIF_DMEM_STACK=10)
      INTEGER PAPIF_DMEM_PAGESIZE
      PARAMETER (PAPIF_DMEM_PAGESIZE=11)
      INTEGER PAPIF_DMEM_MAXVAL 
      PARAMETER (PAPIF_DMEM_MAXVAL=12)
      INTEGER PAPI_OK           
      PARAMETER (PAPI_OK=0)
      INTEGER PAPI_EINVAL       
      PARAMETER (PAPI_EINVAL=-1)
      INTEGER PAPI_ENOMEM       
      PARAMETER (PAPI_ENOMEM=-2)
      INTEGER PAPI_ESYS         
      PARAMETER (PAPI_ESYS=-3)
      INTEGER PAPI_ECMP         
      PARAMETER (PAPI_ECMP=-4)
      INTEGER PAPI_ECLOST       
      PARAMETER (PAPI_ECLOST=-5)
      INTEGER PAPI_EBUG         
      PARAMETER (PAPI_EBUG=-6)
      INTEGER PAPI_ENOEVNT      
      PARAMETER (PAPI_ENOEVNT=-7)
      INTEGER PAPI_ECNFLCT      
      PARAMETER (PAPI_ECNFLCT=-8)
      INTEGER PAPI_ENOTRUN      
      PARAMETER (PAPI_ENOTRUN=-9)
      INTEGER PAPI_EISRUN       
      PARAMETER (PAPI_EISRUN=-10)
      INTEGER PAPI_ENOEVST      
      PARAMETER (PAPI_ENOEVST=-11)
      INTEGER PAPI_ENOTPRESET   
      PARAMETER (PAPI_ENOTPRESET=-12)
      INTEGER PAPI_ENOCNTR      
      PARAMETER (PAPI_ENOCNTR=-13)
      INTEGER PAPI_EMISC        
      PARAMETER (PAPI_EMISC=-14)
      INTEGER PAPI_EPERM        
      PARAMETER (PAPI_EPERM=-15)
      INTEGER PAPI_ENOINIT      
      PARAMETER (PAPI_ENOINIT=-16)
      INTEGER PAPI_ENOCMP       
      PARAMETER (PAPI_ENOCMP=-17)
      INTEGER PAPI_ENOSUPP      
      PARAMETER (PAPI_ENOSUPP=-18)
      INTEGER PAPI_ENOIMPL      
      PARAMETER (PAPI_ENOIMPL=-19)
      INTEGER PAPI_EBUF         
      PARAMETER (PAPI_EBUF=-20)
      INTEGER PAPI_EINVAL_DOM   
      PARAMETER (PAPI_EINVAL_DOM=-21)
      INTEGER PAPI_EATTR        
      PARAMETER (PAPI_EATTR=-22)
      INTEGER PAPI_ECOUNT       
      PARAMETER (PAPI_ECOUNT=-23)
      INTEGER PAPI_ECOMBO       
      PARAMETER (PAPI_ECOMBO=-24)
      INTEGER PAPI_ECMP_DISABLED
      PARAMETER (PAPI_ECMP_DISABLED=-25)

!
!  PAPI preset event values.
!

      INTEGER PAPI_L1_DCM       
      PARAMETER (PAPI_L1_DCM=((-2147483647) - 1))
      INTEGER PAPI_L1_ICM       
      PARAMETER (PAPI_L1_ICM=-2147483647)
      INTEGER PAPI_L2_DCM       
      PARAMETER (PAPI_L2_DCM=-2147483646)
      INTEGER PAPI_L2_ICM       
      PARAMETER (PAPI_L2_ICM=-2147483645)
      INTEGER PAPI_L3_DCM       
      PARAMETER (PAPI_L3_DCM=-2147483644)
      INTEGER PAPI_L3_ICM       
      PARAMETER (PAPI_L3_ICM=-2147483643)
      INTEGER PAPI_L1_TCM       
      PARAMETER (PAPI_L1_TCM=-2147483642)
      INTEGER PAPI_L2_TCM       
      PARAMETER (PAPI_L2_TCM=-2147483641)
      INTEGER PAPI_L3_TCM       
      PARAMETER (PAPI_L3_TCM=-2147483640)
      INTEGER PAPI_CA_SNP       
      PARAMETER (PAPI_CA_SNP=-2147483639)
      INTEGER PAPI_CA_SHR       
      PARAMETER (PAPI_CA_SHR=-2147483638)
      INTEGER PAPI_CA_CLN       
      PARAMETER (PAPI_CA_CLN=-2147483637)
      INTEGER PAPI_CA_INV       
      PARAMETER (PAPI_CA_INV=-2147483636)
      INTEGER PAPI_CA_ITV       
      PARAMETER (PAPI_CA_ITV=-2147483635)
      INTEGER PAPI_L3_LDM       
      PARAMETER (PAPI_L3_LDM=-2147483634)
      INTEGER PAPI_L3_STM       
      PARAMETER (PAPI_L3_STM=-2147483633)
      INTEGER PAPI_BRU_IDL      
      PARAMETER (PAPI_BRU_IDL=-2147483632)
      INTEGER PAPI_FXU_IDL      
      PARAMETER (PAPI_FXU_IDL=-2147483631)
      INTEGER PAPI_FPU_IDL      
      PARAMETER (PAPI_FPU_IDL=-2147483630)
      INTEGER PAPI_LSU_IDL      
      PARAMETER (PAPI_LSU_IDL=-2147483629)
      INTEGER PAPI_TLB_DM       
      PARAMETER (PAPI_TLB_DM=-2147483628)
      INTEGER PAPI_TLB_IM       
      PARAMETER (PAPI_TLB_IM=-2147483627)
      INTEGER PAPI_TLB_TL       
      PARAMETER (PAPI_TLB_TL=-2147483626)
      INTEGER PAPI_L1_LDM       
      PARAMETER (PAPI_L1_LDM=-2147483625)
      INTEGER PAPI_L1_STM       
      PARAMETER (PAPI_L1_STM=-2147483624)
      INTEGER PAPI_L2_LDM       
      PARAMETER (PAPI_L2_LDM=-2147483623)
      INTEGER PAPI_L2_STM       
      PARAMETER (PAPI_L2_STM=-2147483622)
      INTEGER PAPI_BTAC_M       
      PARAMETER (PAPI_BTAC_M=-2147483621)
      INTEGER PAPI_PRF_DM       
      PARAMETER (PAPI_PRF_DM=-2147483620)
      INTEGER PAPI_L3_DCH       
      PARAMETER (PAPI_L3_DCH=-2147483619)
      INTEGER PAPI_TLB_SD       
      PARAMETER (PAPI_TLB_SD=-2147483618)
      INTEGER PAPI_CSR_FAL      
      PARAMETER (PAPI_CSR_FAL=-2147483617)
      INTEGER PAPI_CSR_SUC      
      PARAMETER (PAPI_CSR_SUC=-2147483616)
      INTEGER PAPI_CSR_TOT      
      PARAMETER (PAPI_CSR_TOT=-2147483615)
      INTEGER PAPI_MEM_SCY      
      PARAMETER (PAPI_MEM_SCY=-2147483614)
      INTEGER PAPI_MEM_RCY      
      PARAMETER (PAPI_MEM_RCY=-2147483613)
      INTEGER PAPI_MEM_WCY      
      PARAMETER (PAPI_MEM_WCY=-2147483612)
      INTEGER PAPI_STL_ICY      
      PARAMETER (PAPI_STL_ICY=-2147483611)
      INTEGER PAPI_FUL_ICY      
      PARAMETER (PAPI_FUL_ICY=-2147483610)
      INTEGER PAPI_STL_CCY      
      PARAMETER (PAPI_STL_CCY=-2147483609)
      INTEGER PAPI_FUL_CCY      
      PARAMETER (PAPI_FUL_CCY=-2147483608)
      INTEGER PAPI_HW_INT       
      PARAMETER (PAPI_HW_INT=-2147483607)
      INTEGER PAPI_BR_UCN       
      PARAMETER (PAPI_BR_UCN=-2147483606)
      INTEGER PAPI_BR_CN        
      PARAMETER (PAPI_BR_CN=-2147483605)
      INTEGER PAPI_BR_TKN       
      PARAMETER (PAPI_BR_TKN=-2147483604)
      INTEGER PAPI_BR_NTK       
      PARAMETER (PAPI_BR_NTK=-2147483603)
      INTEGER PAPI_BR_MSP       
      PARAMETER (PAPI_BR_MSP=-2147483602)
      INTEGER PAPI_BR_PRC       
      PARAMETER (PAPI_BR_PRC=-2147483601)
      INTEGER PAPI_FMA_INS      
      PARAMETER (PAPI_FMA_INS=-2147483600)
      INTEGER PAPI_TOT_IIS      
      PARAMETER (PAPI_TOT_IIS=-2147483599)
      INTEGER PAPI_TOT_INS      
      PARAMETER (PAPI_TOT_INS=-2147483598)
      INTEGER PAPI_INT_INS      
      PARAMETER (PAPI_INT_INS=-2147483597)
      INTEGER PAPI_FP_INS       
      PARAMETER (PAPI_FP_INS=-2147483596)
      INTEGER PAPI_LD_INS       
      PARAMETER (PAPI_LD_INS=-2147483595)
      INTEGER PAPI_SR_INS       
      PARAMETER (PAPI_SR_INS=-2147483594)
      INTEGER PAPI_BR_INS       
      PARAMETER (PAPI_BR_INS=-2147483593)
      INTEGER PAPI_VEC_INS      
      PARAMETER (PAPI_VEC_INS=-2147483592)
      INTEGER PAPI_RES_STL      
      PARAMETER (PAPI_RES_STL=-2147483591)
      INTEGER PAPI_FP_STAL      
      PARAMETER (PAPI_FP_STAL=-2147483590)
      INTEGER PAPI_TOT_CYC      
      PARAMETER (PAPI_TOT_CYC=-2147483589)
      INTEGER PAPI_LST_INS      
      PARAMETER (PAPI_LST_INS=-2147483588)
      INTEGER PAPI_SYC_INS      
      PARAMETER (PAPI_SYC_INS=-2147483587)
      INTEGER PAPI_L1_DCH       
      PARAMETER (PAPI_L1_DCH=-2147483586)
      INTEGER PAPI_L2_DCH       
      PARAMETER (PAPI_L2_DCH=-2147483585)
      INTEGER PAPI_L1_DCA       
      PARAMETER (PAPI_L1_DCA=-2147483584)
      INTEGER PAPI_L2_DCA       
      PARAMETER (PAPI_L2_DCA=-2147483583)
      INTEGER PAPI_L3_DCA       
      PARAMETER (PAPI_L3_DCA=-2147483582)
      INTEGER PAPI_L1_DCR       
      PARAMETER (PAPI_L1_DCR=-2147483581)
      INTEGER PAPI_L2_DCR       
      PARAMETER (PAPI_L2_DCR=-2147483580)
      INTEGER PAPI_L3_DCR       
      PARAMETER (PAPI_L3_DCR=-2147483579)
      INTEGER PAPI_L1_DCW       
      PARAMETER (PAPI_L1_DCW=-2147483578)
      INTEGER PAPI_L2_DCW       
      PARAMETER (PAPI_L2_DCW=-2147483577)
      INTEGER PAPI_L3_DCW       
      PARAMETER (PAPI_L3_DCW=-2147483576)
      INTEGER PAPI_L1_ICH       
      PARAMETER (PAPI_L1_ICH=-2147483575)
      INTEGER PAPI_L2_ICH       
      PARAMETER (PAPI_L2_ICH=-2147483574)
      INTEGER PAPI_L3_ICH       
      PARAMETER (PAPI_L3_ICH=-2147483573)
      INTEGER PAPI_L1_ICA       
      PARAMETER (PAPI_L1_ICA=-2147483572)
      INTEGER PAPI_L2_ICA       
      PARAMETER (PAPI_L2_ICA=-2147483571)
      INTEGER PAPI_L3_ICA       
      PARAMETER (PAPI_L3_ICA=-2147483570)
      INTEGER PAPI_L1_ICR       
      PARAMETER (PAPI_L1_ICR=-2147483569)
      INTEGER PAPI_L2_ICR       
      PARAMETER (PAPI_L2_ICR=-2147483568)
      INTEGER PAPI_L3_ICR       
      PARAMETER (PAPI_L3_ICR=-2147483567)
      INTEGER PAPI_L1_ICW       
      PARAMETER (PAPI_L1_ICW=-2147483566)
      INTEGER PAPI_L2_ICW       
      PARAMETER (PAPI_L2_ICW=-2147483565)
      INTEGER PAPI_L3_ICW       
      PARAMETER (PAPI_L3_ICW=-2147483564)
      INTEGER PAPI_L1_TCH       
      PARAMETER (PAPI_L1_TCH=-2147483563)
      INTEGER PAPI_L2_TCH       
      PARAMETER (PAPI_L2_TCH=-2147483562)
      INTEGER PAPI_L3_TCH       
      PARAMETER (PAPI_L3_TCH=-2147483561)
      INTEGER PAPI_L1_TCA       
      PARAMETER (PAPI_L1_TCA=-2147483560)
      INTEGER PAPI_L2_TCA       
      PARAMETER (PAPI_L2_TCA=-2147483559)
      INTEGER PAPI_L3_TCA       
      PARAMETER (PAPI_L3_TCA=-2147483558)
      INTEGER PAPI_L1_TCR       
      PARAMETER (PAPI_L1_TCR=-2147483557)
      INTEGER PAPI_L2_TCR       
      PARAMETER (PAPI_L2_TCR=-2147483556)
      INTEGER PAPI_L3_TCR       
      PARAMETER (PAPI_L3_TCR=-2147483555)
      INTEGER PAPI_L1_TCW       
      PARAMETER (PAPI_L1_TCW=-2147483554)
      INTEGER PAPI_L2_TCW       
      PARAMETER (PAPI_L2_TCW=-2147483553)
      INTEGER PAPI_L3_TCW       
      PARAMETER (PAPI_L3_TCW=-2147483552)
      INTEGER PAPI_FML_INS      
      PARAMETER (PAPI_FML_INS=-2147483551)
      INTEGER PAPI_FAD_INS      
      PARAMETER (PAPI_FAD_INS=-2147483550)
      INTEGER PAPI_FDV_INS      
      PARAMETER (PAPI_FDV_INS=-2147483549)
      INTEGER PAPI_FSQ_INS      
      PARAMETER (PAPI_FSQ_INS=-2147483548)
      INTEGER PAPI_FNV_INS      
      PARAMETER (PAPI_FNV_INS=-2147483547)
      INTEGER PAPI_FP_OPS       
      PARAMETER (PAPI_FP_OPS=-2147483546)
      INTEGER PAPI_SP_OPS       
      PARAMETER (PAPI_SP_OPS=-2147483545)
      INTEGER PAPI_DP_OPS       
      PARAMETER (PAPI_DP_OPS=-2147483544)
      INTEGER PAPI_VEC_SP       
      PARAMETER (PAPI_VEC_SP=-2147483543)
      INTEGER PAPI_VEC_DP       
      PARAMETER (PAPI_VEC_DP=-2147483542)
      INTEGER PAPI_REF_CYC      
      PARAMETER (PAPI_REF_CYC=-2147483541)
