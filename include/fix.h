#pragma once

#define RELEASE

#ifdef RELEASE

//hack.cpp
#define initPatch f2a55187b17397c85f02df20ff1ffa17
#define loopPatch afb0dcc3dfd67dc80f5fdb3aaf38cf3d
#define threadFuckingGame c4ff55d92b7da8bc4c9ad7679285a633
#define FuckMiHoYo b558836d34fb69a00bc627336bbf333e

//SafeChars.hpp
#define MiHoYoSDK cdcc79f9b18f787bf542519c633ed2c8
#define SafeChars febe142e4dcb75c32e47dd9bfa86b9b3
#define _data ed71cb19637b5652a6cb1516874530c9
#define _length b3160d919f3c45c88f57f0980acb8046
#define _key adebb7b2773d0bf1aa83b5882ad15db0

//Bytes.hpp
#define Bytes f72db19ca7afa545e52eb8fac2cede04
#define _size ae47e1308bad28f09365120bc445910b

//AESCrypto.h
#define AESEncode c206e4479440996a125c2bc67b236e60
#define AESDecode ddcb24d7b8733569a6b64d4dad98c828

//Hash.h
#define DecryptAscii dd9ec617a6a1f20478550059ced72365
#define CheakAscii f2cc2bc802f9584262224ecdbb91f8c9
#define MD5 e524288de424ff0bda6c0c2565a925c6

//RSACrypto.h
#define RSACrypto b6e8c42c79a09eeae96f121f5c469e77
#define _public ef62ca37856428bc03479c08230d26fe
#define _private f7e6f6f5e241d14a962c404a997f0cc9
#define publicEncrypt b7f20e75f41d3f6cba573d46b8bd2499
#define publicVerify f441212cbeaf5c528ce20e85b6063478
#define privateDecrypt c6e10c97af672b76e370f047c4a0e601
#define privateSign d6a78984ac62804859875c59dc73ab5e

//network.cpp
#define InitCallBack c5b689ef60a2f8174a284be5ea4ba483
#define NetSyncLock c0b98eda5ef2a29d5eee8dee75a8d18f
#define NetClient ee36229f245ff5c0c4a805dbeff0cefe
#define NetRSA f6f552806a7502f6befb085bf3740894
#define SendMsg ce2854a763730e81af4a1a902bf564b3
#define SendMsgEX a1bf21c6ccfce27dc93aa6d8f9baaef8
#define SendJSON b7086bed875a7b712a48d3900d002714
#define LinkServer c09d177727bb313841fde35d04e5da4a

//static/config.h
#define StaticData a60d97e060c88070c1d6cbdf61d44692
#define BUILD_VERSION fb067852437ae9bd2bf8b9a5a8bd24ce

//static/keys.h
#define ServerIP eef43ae1c6a0f4a23ca8666f56650e70
#define ServerAESKey dcca8279a64a9770998677010138ea2b
#define ClientAESKey b453b375582ace9eb13c6e3146ea282c
#define ServerPublicKey ed6b0314138daee886da17bdf270824a
#define ClientPrivateKey e02e5ab42b5a5dc6cfb70810b458f899

//static/path.h
#define PATH_uif a7b658d4fef84f0a427049e1eb8d17a2
#define PATH_maps ce9496cf38f23109b3baf72f6e641f5e
#define PATH_log f5e00a9fed23408ac2e6d1a10255594e
#define PATH_CPUMaxFreq d139c9a324f9aa6f6950444bd190ff87
#define PATH_CPUMinFreq a0aca310bae48529502109c3db0700ce
#define PATH_CPUInfo e59001f3472a0ae413c58ec9856b90f7
#define PATH_MemInfo e3d05a5da34871d2abb04b35289084e7
#define PATH_SystemVersion ca1b2c8b8fecca54f525a156364bc11b
#define PATH_cfg b9c94fc7836b2158f62031a89b07d070
#define PATH_JsonConfigs f4ada7c5ed97635f4a8dc9b35b4c11ff
#define PATH_LIBchaos a5a69c9d956766dfb0a623f137ece522
#define PATH_LIBcybl ad3cc740e5619113ac0ad9c9832a17a1
#define PATH_baseAPK bac2cbd49236238999781e4086d31c61
#define PATH_RSA cd74a0b6371bfb62b59809f4d7d59149

//static/dlopen.h
#define STR_dlopenV00Func c903932b229d4ca4388c7721a31b9621
#define STR_dlopenV19Func c87fe5853df187a9e35de750f124fb64
#define STR_dlopenV24Func b25a29f68637899d545b28624e35a04d
#define STR_dlopenV26Func b8520e81d8f1925479ceaa6b9dbe65b4
#define STR_tpsafeLib ac82a18d8dd294c834895b05ce59801f
#define STR_il2cppLib e187773af0dc6749a98728bb897e8801

//static/il2cpp.h
#define STR_il2cpp_string_new e3b6c30c1699a82ee3690e8c41551179
#define STR_il2cpp_class_get_methods d29e571570c249f6d49f7213bcdc5231
#define STR_il2cpp_class_get_fields ff7c19ca3f9e41f7313edef6ce2beee1
#define STR_il2cpp_class_get_method_from_name a169c6863295df053ed6d8164c568634
#define STR_il2cpp_class_from_name b4d45115aa200d2aa6a2e6eba0a70143

//static/Functions.h
#define STR_guid cc568001d699eefe376bc649fafc875f
#define STR_gameLogin b5389523c63f1cf75f33c839ad31e490

//static/Hash.h
#define STR_md5Format cb721b0b5f52077be463b70d962bcee5

//static/network.h
#define STR_symbol f911ccf4cf4d09d6f8da0d0184fa7e8d
#define STR_date d3fd86321dcc57feebd549f7be4de8a6
#define STR_route d0b9412f6d2638d04cdcc4261d5e1955
#define STR_data b9e8620b677fd10f8e1caafc6014c238
#define STR_status f40843912a7334dc33238179fdd0bda1
#define STR_error cda5a79e5c91ddc447fea85bfe757b42
#define STR_version e8815da2149981c791bcaffb5003ba17
#define STR_project aec6920a256ae8c2f60b3f49916a60db
#define STR_channel feacfaa8be36ad979fb1dde89e5a13f1
#define STR_uuid d92cb335d4497db5419dda9909fe4e7b
#define STR_uif f4c14ec72afd1786a6382c75462e2bbf
#define STR_login dc6b197884b77b853dfac595761a8184
#define STR_lenForm d93a09464681a19b094e18d3b726176d

//static/AntiDebug.h
#define STR_procStatus d26c34c69639744d08df61070d7ef9b5
#define STR_TracerPid e3b3d0cde662c629f601ec99c7839d9b

//static/tools.h
#define STR_timeFormat a86f83ad88fdc11a759dc3aa88fa20bd
#define STR_logStart ae70daa606ba28c24869cbc9404b9ff4
#define STR_roData01 ebba14969e78e927cfb1568b73f8f19a
#define STR_roData02 bed65d9c8d28d12d7b549d4b8740c111
#define STR_roData03 adeaa803b54ad237862a6b1c2e2dee2d
#define STR_roData04 b1251c4e5732a04880f5020b739b0bd8
#define STR_roData05 b7237755059bef785fb36a6a48aede0f
#define STR_roData06 f9f7da6694ee860c414407f4fabe7ebd
#define STR_roData07 e32a93d8f142bf6feae7ab768aef3e7c
#define STR_roData08 f0222ef80f1d0e616daf5e40aa3705ab
#define STR_roData09 bd06825c04e0a2a44509ad0846aa5d07
#define STR_roData10 dc18dac4b8750e0e77c2d6292c75c3d5
#define STR_roData11 a1631f2e7852b7e7e4a55f2a34bd0a94
#define STR_roData12 b445bca337eaad252718c95497367394
#define STR_roData13 f24e4026fdae5120f260395777e330cd
#define STR_roData14 e50066ad16b612ddef7045aed20d4acb
#define STR_roData15 ef92501233921f096cae7ed41edea060
#define STR_roData16 c40eb60fbc7351916a73e57be0c51b02
#define STR_roData17 c2b99a5b51831dfdf19c0691875e6a2e
#define STR_roData18 c4b5000ab7e595c80887ca9ce6309830
#define STR_roData19 ae4c8a161c19c44e8bd88c9c623f6142
#define STR_roData20 ac516bfe06b3f3aa4c9988aa745055b0

//static/sync.h
#define STR_loopSync bba051f22efac0bfe1e7e744daaf77d1
#define STR_subData a1e4c0642158ad1df9e706dc8733f57f
#define STR_state a73fc3111ce663ece5b9d90f10ff00c4
#define STR_title f46800177f428fb5ea46ad16700827a0
#define STR_lineTitle b452d3ba5438200ece73ab12cfe4417d
#define STR_lineType a8be674050223239e08559b3ada3f359
#define STR_lineValue e4705d982c1d122532c1ab5b6c62924b
#define STR_lineState d1669beada36911b947af0fe88dfd82f
#define STR_off f8e69c0eee33a8b329726cb9f71604b6
#define STR_funcs c97178f38d7c902b8612a3a1862407ca
#define STR_chaos c898b5ea2795ef3bed59a37ed911bfd6
#define STR_cybl f65c30dd0b1fc15d5c622c7646c2f0a4
#define STR_apk d5d6ac4d38514d15e6b8237ebb62d141

//static/verify.h
#define CERT_RSA_EXT_KEY e8916bdec76cf9a43f47614a7b8b1cb2
#define CERT_RSA_INS_KEY fcf6a406e6f1363abc71cf900be59b1a

//AntiDebug.h
#define AntiDebugID df8bad23561a0be72c66b348c3bd63c1
#define AntiDebug d4bf7fbca816694a23279109034dfd43
#define CheckDebug fdcd3f09bdd644d772cdc74c6df6e159

//file.h
#define VerifyCallBack b8d71f1dcbf8d8bae255cd688c2e6a96
#define FileRead b0b6e6fa6b8908722da33d5430ed16a9
#define FileLine b7cdfafb206513d8729541989147a138
#define FileWrite c955e1aabe174f0f3addfd9d627becea
#define UncompressAPK cdae819542f0c5a473eb58ca2895ba67

//str.h
#define StrDeleteMark e19ce325e6501c02bb726887dfd41d54
#define StrReplaceMark b92f702ceac9ab205543ee73db08d93d

//tools.h
#define Jvm d8a67312fb66c7c2a8469ee94c8c39ed
#define RunTimeStream b6207569d29395659f61a48b035750c1
#define JsonReader bf9cd69da0e13d9c8726ffc2ac377759
#define JsonWriter fc2aba80df2f5b4022c31cab5bb5a9eb
#define GetModuleAddr ff01f09aea3fc663a1d760eff681bd28
#define NowTime a02940abc3c255e1e7c1aa7e2cafcec3
#define GetGEnv bcd2aa1798047aa16ddd9237f5629d46
#define RunTimeInit e3ced44e5457f734edd42f67b1b138a1
#define CloseJVM cbccfda33be0f57daa051f105a05ea7a
#define GetUUID cb98bb0dab266c356ec2e3ff4054d19d
#define CloseCore c5d855ddeac9bc19bb10839957932994
#define RunTimeLog b87f1c2ee74ace0d2092bf15477cffaa

//configs.h
#define Sync e2fcb556eaff7144933c2d4bfd428ef7
#define LineData f9d4ff1c7b8462ca92a22061400038fd
#define MainData a30f722fe750a6dabc08e319bf3e30d0
#define Config cdce1ef84ed22c9b3470966f2d107fc9
#define GetStateOrValue cd012ce72c8097af08242d22bfe08b6d

//sync.h
#define Il2cpp e2bfddc6cec2a307312fc19b68a550ad
#define MTP_Off f012c9bd488fa957740f032a07593124
#define ADSS_NUM a1429502554f3b7536c0111586d379d3
#define OpenFuncs e554d223d9958587ae49f8b53f899ff1
#define Address ea6b82f80c9bc780fa0f81fbd77b98bf
#define PatchData ee48bdb37547e4a20195e1bd1f2e2fe6
#define InitAllVariable e4e84d7b1cf8f6c9f6a1d05aaa641866
#define InitAddress bc24dac789b347be1bf4aabf748b1499
#define InitConfig cf8d3f8f79b626943957c2a92f69b7db
#define SyncJsonConfig f7d65225d30bd29d4f255d1edd26905a

//verify.h
#define Verify b1295ae7e38dfdb433085ac5364c715b
#define HexCode d5e85a436ac35dc6b0685d0dcbc11452
#define LocalVFC d2f5de55ac8b62a3d81e7e61b7482253
#define RemoteVFC c30e9d388a2791a6c6182eea2850fcd4
#define JniVerifySignature a9efce66efb257928f7ab05828eed9e0
#define VerifyCertRsaExt ef767d18c92e37606593a2dc36933ff7
#define VerifyCertRsaIns afdc5b0e47279faeb3950afa6248b7c2
#define VerifyFile e85adcb191f2e23e8a7ec7ae8379bfaf
#define GetChaosMD5 c42a61b4a403d80ab613ff00707bb3c1
#define GetCyBLMD5 f75715d3c6b15e58953a854c97671c01
#define GetAPKMD5 c05255536627f3f3972a659b77e027b0
#define VerifyFileByJson f6112bcb0898785153e02038a53bbfa0
#define VerifyVFC a176f8fb722397adb9fb257ea1a8f605

//hook.h
#define Hook f90c28a50555576a42eae38d658891ec
#define zzReplace a51322e5a3f3ba273460b6789544506f
#define zzCodePatch a28fd5c940f26276cd794278f16fe4b8

//dlopen.h
#define Dlopen e1f5d7a014de44f2d4ca6d899c4ace58
#define HookLock_Tpsafe e633b197a22ec3c3bba89e5f135e541e
#define HookLock_Il2cpp ac5d4df325c5a312c513bb5898fcf854
#define ReplaceDlopen f630f7a9010a7c3c0e386ef30e05312a
#define LoadedLib bf0b43d6f9332dfc6d1545f4170a575a
#define DlopenV00 d271c5d2d91629b4b73469ab8ffacc76
#define _DlopenV00 c2cec16d7547b2f3ac958d0574e6f42f
#define DlopenV19 eaa97b9f15583ef1e907e1b61527901b
#define _DlopenV19 dd33e51d1a72728348cdda8e8f863f51
#define DlopenV24 ba071b3724add4a00df4d95c91e057e1
#define _DlopenV24 f26e516157bf7cbdaf4432ed17cc1cda
#define DlopenV26 ac3d9829a49430a9d2eb3aab5e0f2dec
#define _DlopenV26 facfdf2defc260b80995cb1aaa5da483

//il2cpp-api-types.h
#define Loaded d898bc09eba8079ca4cc2e80cc3c1efc
#define Il2CppClass bdd9eacee2f524f787d8a1c7f0a0e2d2
#define Il2CppType cc59550edf4bb590ddfd39c998df5130
#define EventInfo e72d945ecb6c662daf121684a627f7c3
#define MethodInfo a0e8b1763dae2d9997411063584eebed
#define FieldInfo c8ee3e580e00f9cb605b4ecd44de103f
#define PropertyInfo ddded9bd0dae89ce014e2296b17d6a21
#define Il2CppAssembly d9d6e2045a49135eddc0f262d6434fdf
#define Il2CppArray c96ec8d43b86a63e96e0704a6ea43734
#define Il2CppDelegate bff5af98c9c970314c8b83aac4baadf2
#define Il2CppDomain db11ff5c7534252c80c7ff4db0984870
#define Il2CppImage ee51e8d812657ecc5ca2ee77ce1b61e0
#define Il2CppException a41250c20662f9a5aadbd988c6ba0c57
#define Il2CppProfiler d83909fd7dfd0446f444e1a487dc51cd
#define Il2CppObject bc38313d5e155726a4eaacec4b1e50e3
#define Il2CppReflectionMethod f9c95e7a3edffff14439021eefe6fd1f
#define Il2CppReflectionType a56a9fd5770c0df0d147b7a465cdc37c
#define Il2CppString cb6b49d30601d293087c32ca7594278b
#define Il2CppThread ed989f4993d2007b3e6db31918112b1a
#define Il2CppAsyncResult dce6600cc6020b7d5a65cbdb308379d1
#define Il2CppProfileFlags bb6a0b9302724923c07f3245148270cb
#define Il2CppProfileFileIOKind d2c7964172256202831b65e00f59503e
#define Il2CppGCEvent dafa1d1f15f93178ef66b53d717748f7
#define Il2CppStat b8368f27759eda23f45aaa7b0d889ff4
#define Il2CppRuntimeUnhandledExceptionPolicy cd4975391b3963ace93a98aa699a93db
#define Il2CppStackFrameInfo b5cf18d70f5a036821fe6cb400283687
#define Il2CppMemoryCallbacks ff50d020d5a514032383b6514b5d6911
#define Il2CppChar bd89f2d9029d0500a699efb2b108112f
#define Il2CppNativeChar a49721ba840a2323c96da2f8601e3fda
#define il2cpp_register_object_callback f3b7e97eeb9bc346b97d85b31516ba3d
#define il2cpp_WorldChangedCallback b631aed02fa13f906eff9b34b26a8f88
#define Il2CppFrameWalkFunc cba5d6a1884d799c78794989b339cc37
#define Il2CppProfileFunc a2a0e02efced26f439e0f5ff94e365c9
#define Il2CppProfileMethodFunc ce3f268020002a357cab8b9e9995d512
#define Il2CppProfileAllocFunc f353972304c2d1d0dd3db72ae4ad91bb
#define Il2CppProfileGCFunc e2b2e71a0d40c5a1546b964d73adbb5a
#define Il2CppProfileGCResizeFunc a10454863a3a2e1d14cb23b4f01e1c8f
#define Il2CppProfileFileIOFunc dd8ee7f1da54546abb8b420c81affecc
#define Il2CppSetFindPlugInCallback c0f9453632bcdbc248e2a711cb7a4a78
#define Il2CppLogCallback d62a171f1ab76937ed0c4cfa39616949
#define Il2CppManagedMemorySnapshot a7844046ba862d15fdd2117d13150a31
#define Il2CppMethodPointer bbfa919f1c03686268e758c897f575e7
#define il2cpp_array_size_t fc69ed69fd595108868a9fa0c528dbd2
#define malloc_func adae0ac7bfbfead24828b3041f3bdf4e
#define aligned_malloc_func e69f8280e26007b101fb94d8c0068b24
#define free_func a6c89dafe7e4dea6d62cc87e5c8dc9cd
#define aligned_free_func e98c145e5205fa075bd8d139ef0342e7
#define calloc_func a3753af26f6dfb634a73ca269e2b5962
#define realloc_func fe1e326e4f1ff0bcbbe059774e4e9876
#define aligned_realloc_func e7ee20013fe10047ad9246762649cd8d

//il2cpp-api.h
#define Il2CppNameToTypeDefinitionIndexHashTable c5865a09c95c592332706a7fcedd55c0
#define MonitorData b3503b8bb86cd2b28da96e2541ff309b

//il2cpp-blob.h
#define Il2CppTypeEnum f824fd3395467f6807844d060249d689

//il2cpp-class-internals.h
#define Il2CppGuid a6ec014e38c709f7d362ba0744e7dde0
#define Il2CppAppDomain c138a4cd75c391fbecfbc6107b3fbdc8
#define Il2CppAppDomainSetup dded4cd334adb20aafb8cebfa5902803
#define Il2CppAppContext fa8b83d9e4a55f2bfeb26038706a2a13
#define InvokerMethod f511159d2af66773f10e92ccaf6b6827
#define PInvokeMarshalToNativeFunc cdf328080161c6e007c63862c8ed148b
#define PInvokeMarshalFromNativeFunc e7d01a22eab555d3a9e222e090321b53
#define PInvokeMarshalCleanupFunc b34cbfeed776cc109dca22d3ece64c7d
#define CreateCCWFunc b227944dca8cea27f172a9c7103272ed
#define Il2CppInteropData b12f14759d5e86feb5f6174ddb729aaf
#define Il2CppRuntimeInterfaceOffsetPair ae1323891d469fd6a1e5f6105be05a04
#define Il2CppRGCTXData afcda1f7f1a5d7d030ddf4620c3f15ca
#define VirtualInvokeData cee4c3fb214a784cfb80dfffdb39d7ef
#define ParameterInfo f8918ebde9b3f077bca955c219f6aa25
#define Il2CppIUnknown e47fc1a893f144da21fe9fedcac3c6b7

//il2cpp-config.h
#define il2cpp_hresult_t bdcd7c5e904a54c6c0d84287e0c1cad4

//il2cpp-metadata.h
#define TypeIndex e33648a4c8f019d3a633f28beea84442
#define TypeDefinitionIndex b542a82d2374de7baad3bedcd7fd5505
#define FieldIndex ce60e10b9c0c0b83825f7d80e973c49c
#define DefaultValueIndex fdcd664b7575bf0765238c74b0ff2643
#define DefaultValueDataIndex b16ee0cde107f86e1700f6b67922b73c
#define CustomAttributeIndex d7010d0d71e083bf95a3328346f77dfe
#define ParameterIndex da548c13c0ba4d859a8d9a7624308ff3
#define MethodIndex f355087da5664b7fea92c8e55224ebbb
#define GenericMethodIndex c30473c8cf6dd3df3cca2139749ac250
#define PropertyIndex fdc92c08e186a7f4a02a3f1607271393
#define EventIndex ae5112e3dd6f80eac434f9dc415344d6
#define GenericContainerIndex f202cc6f7c7e1fa7c5e42dfe03d476e8
#define GenericParameterIndex b24b092ece0f40e31522fa1a95ab6276
#define GenericParameterConstraintIndex bb5894576f9ee0eafe5825ff50446115
#define NestedTypeIndex c2a422f544005ba26b87aba226b7b132
#define InterfacesIndex c9034f0f411b7c1cad744965b93f96dd
#define VTableIndex f0c5395ea7d2280e12481bc1fc62f39f
#define InterfaceOffsetIndex f04d4e351e1a95b8c1fcc65b03cda24e
#define RGCTXIndex c30a5d3d5f5324661e08b1f7269a0cc6
#define StringIndex a5d9ac2e76fe7d895cfb139e51636869
#define StringLiteralIndex cc60100b3aa135764db8c56d9aff17e9
#define GenericInstIndex b35969fe6bc6c8decedc35dc83ceef8a
#define ImageIndex dbb97f7b219826186dcfc3b59ad80684
#define AssemblyIndex f373027e39c430c3ab32f62494baa373
#define InteropDataIndex daa40b38ec78dc80e464d13ecc6be0f1
#define EncodedMethodIndex ae153bbcfe31b6071a59a60f33213e29
#define Il2CppMetadataUsage c4097d0089c00860dec36d135f7d30ec
#define GetEncodedIndexType c5426f15fca681d3f80097a392bf65a0
#define GetDecodedMethodIndex e07a448e5f247f44a9bc0c95f6952249
#define Il2CppTypeDefinitionMetadata c92f98399c930180477c32dddbf5e706
#define Il2CppRGCTXDefinitionData abecb9fa07a1b84913a6bad54069342b
#define Il2CppRGCTXDataType b48a5dcdce8eabe77b7ebe05fe3e9235
#define Il2CppRGCTXDefinition e28ac51857dfb864544b8ced51c76f5d
#define Il2CppInterfaceOffsetPair dc2cfd4798eec2a21c296717c38a53ff
#define Il2CppTypeDefinition dd4c6f4063ba26fdf0a45358a6ca88aa
#define Il2CppFieldDefinition ba22ebb3f451ce4f1fcf7ddbcd2d865c
#define Il2CppFieldDefaultValue f5b9f3c01579ad6b72a0ef8a6a6a9518
#define Il2CppFieldMarshaledSize e18e645e91d5a635b79648dfe16993e7
#define Il2CppFieldRef eaa0cc84d11ebcdd9ef9b0a5fe12fada
#define Il2CppParameterDefinition a77e39b30634be92af549d4d39b47701
#define Il2CppParameterDefaultValue db2b1209ac1adb7d5ff9bef24a9564a7
#define Il2CppMethodDefinition f7e168b5e6039580ab92dfb22889930f
#define Il2CppEventDefinition ca9a126979eb3f901a0e00a45afe6f1b
#define Il2CppPropertyDefinition bfb97480ca732000ba101158389ce750
#define Il2CppMethodSpec e3f0d40164b06749895daebc10dac192
#define Il2CppStringLiteral dec75679ccd90418a255cde8d046b50c
#define Il2CppGenericMethodIndices b9d43915d6b58420725c30d7f54a3046
#define Il2CppGenericMethodFunctionsDefinitions b7798cebe9c360025d3dd3afd54c9c62
#define Il2CppAssemblyName c7bb6adcbd170d82e41bd7246791ea2b
#define Il2CppImageDefinition e77bb9b06b4a2db4d8edc86b80f49cc1
#define kTypeIndexInvalid f076128e70133b654f0323d3f93fd512
#define kTypeDefinitionIndexInvalid afd64728b61286e5a1881fc849e1d0fb
#define kDefaultValueIndexNull bbd9ac65312648b7c6aae388065fb196
#define kEventIndexInvalid e140d3aba27fb4687736d41f2d84b446
#define kFieldIndexInvalid c092d8a24bf1876f47144b357c194608
#define kMethodIndexInvalid f7eae775d8213311f1289e466e51df8e
#define kPropertyIndexInvalid d585391e99bfbe5858ab9974667ca313
#define kGenericContainerIndexInvalid bec9b92b9bb66bd5bd0d952a673d2c5e
#define kGenericParameterIndexInvalid c2f00b2f3d9e365f1f4507293ee036ae
#define kRGCTXIndexInvalid b1f3435a6aceee45926581a4c7cb2aca
#define kStringLiteralIndexInvalid f44df06857529d31d94601f2f38cc9eb
#define kInteropDataIndexInvalid d7243527d62667d556b6fdc0641a7fb8
#define kPublicKeyByteLength fe5a7d8d366a98eebd4a3c7e47887d76
#define Il2CppMetadataUsageList a28d6f863bb428c4e2d4135b5e35d2ee
#define Il2CppMetadataUsagePair fa3bffc7bf7b75759deed8376a14d57a
#define Il2CppCustomAttributeTypeRange bc21feb2762537931d89a0dbe443f87b
#define Il2CppRange b0c4f5693994bd0d7341ece244dabc57
#define Il2CppWindowsRuntimeTypeNamePair efe6d76a3f9ecaf3daff3ffcbfe3ef4d

//il2cpp-runtime-metadata.h
#define Il2CppArrayType be59ccc343bffdb8251ce2cfb591a11a
#define Il2CppGenericInst d6c375ad437b6a85a5ca94bf3d196445
#define Il2CppGenericContext ffa2f6906f15f75c72b1be13afe4729c
#define Il2CppGenericParameter a94af92d1aacb87ca80352ff3a415957
#define Il2CppGenericContainer a49a222074b96313f499e545cd31df57
#define Il2CppGenericClass ff04e65d3cf00b9fd1470a90e57595c8
#define Il2CppGenericMethod b4f1afa97f86b6a61ec3e8abecf287c7
#define Il2CppCallConvention b5a83cd83499d07b0fe2b9a47471ecab
#define Il2CppCharSet b443f4f5596b283bcf802f78a1dfbcad

//il2cpp.h
#define LoadIl2cppLib ecd7945b0a6be7930ad989b61a09986d
#define String_New a206d948fe409ba730dca52725adfe00
#define _String_New d02e03734303a7cea201a41399a9e108
#define Class_GetMethods ece73811bcdd655eb334be2c1b589513
#define _Class_GetMethods b6aa66bae2e27afd98957bf39808309d
#define Class_GetFields a08c565902528b69998e86d3a30e3313
#define _Class_GetFields f1a0b1525516d56de219810370dd8aa8
#define Class_GetMethodFromNameFlags edd1372043c0724eda3e29740ad3bcc5
#define _Class_GetMethodFromNameFlags a9f9f3734628f8f541e710fcc119b4f9
#define Class_FromName b581d1816af14619cd6be13fa1747dd9
#define _Class_FromName bec0def9da2a76c25620905c95b2658a

//tersafe2.h
#define LoadTersafe2Lib c47cef48e480c161fd9454fa9169e553
#define Tersafe2 ce316102a4fef99c00d2ad54f1df0c9e
#define SysOpen b9af95dd989df702173890187ce2eab5
#define _SysOpen add5563bc9219aea6c8e897297030467

//ClassLoad.cpp
#define HookFunc ec7865d19390ca7f884ea0fb3c330fa4

//ClassLoad.h
#define Logic c068aa9ed906cb2d3629cb72305791c6
#define MoleMole dea75ae55ef9414899e9e18d7cb4457b
#define MonoMTP fd662710e8107753e37729e328b6ad63
#define HookClass a250d6ebe65d38310edabc6094c81008

//CSharpString.hpp
#define CSharpString f0901b80681dd570bc17f1f0d0e2a985

//Enum.h
#define Tp2Entry ba927a8d780f8b30177f2032107da13e
#define AttackResult_AnimatorHitEffect f40d41e6b82ba60e58363c8d99e929c9
#define AttackResult_AnimatorHitEffectAux abf8940ac059220e8f95650794b2d6df
#define KillEffect c1dcd35cf2b5a62cba7d62ca288b67cf
#define BeHitEffect d8b3a36b343f5430f49722286a64c800
#define StageCheatData_Type cc90015421a565b170c4e4771c0f9c49
#define LevelSPRecoverSource e0b9529005cfa91ed025f2223b6f5057
#define LevelEndReason fab015dbd638e4908672a5e9978aa9cc

//Functions.cpp
#define GUID_LOCK eb32a32789b944188aa8b83faf8ce283

//Functions.h
#define NetworkManager_GetPersistentUUID cb50f07ecdf5552bb870e9b4c1655c14
#define _NetworkManager_GetPersistentUUID ddbe34c0652b70a86fcf7694becf4089
#define MonoMTP_Tp2UserLogin a99c4f9fd097d3d9ba0b02e7dd03cf69
#define _MonoMTP_Tp2UserLogin b9facb1daa207e724a11a39bd6d09d4a
#define SafeFloat_get_Value fd2ba9973fffea6267add94d359fd1c9
#define _SafeFloat_get_Value e8794fb29becc8eb30e40fd6ade45cb5
#define SafeFloat_set_Value e9eebac9ad942a5def52ef7d57983d2d
#define _SafeFloat_set_Value b087195a3e7e450eb9369e2edf9c6cca
#define LevelAntiCheatPlugin_CollectAntiCheatData c73c11c1a90485316086d154d6cca944
#define _LevelAntiCheatPlugin_CollectAntiCheatData a995868b503352e5a4f6c5f6692c5ce3
#define LevelAntiCheatPlugin_AddData f1a6fde8f95387d10177c84f8c4e10b4
#define _LevelAntiCheatPlugin_AddData f46fd62e5a05de649088613bdeaaee29
#define LimitAvatarChallege_IsFinished e5d6698ff0bc889ad3df192326ad9895
#define BaseMonoAvatar_BeHit aab6f55d0f65391c25a6055144d7b215
#define GalTouchModule_get_IsGalTouchHeXie c211f772cc3cb8a40cbcf4343abd2f87
#define AvatarManager_TryGetLocalAvatar c2903c735fe8dd2d27d63bae8529ffed
#define _AvatarManager_TryGetLocalAvatar c351cab5aeefc7c39e15f07a67c2e15b
#define BaseMonoAvatar_RefreshController e58a50812f0f842a8db0670d77ec04fb
#define _BaseMonoAvatar_RefreshController f3aff4194ad68986426a1934fce16d9c
#define BaseMonoMonster_SetAttackTarget f284c2201c240a62ef3981dca0a47faa
#define _BaseMonoMonster_SetAttackTarget dd94fae1722fde5a9682bf8b0922ea72
#define BaseAbilityActor_CanBeDamageByRuntimeid ea47996cbdf9b3259c313ac8aa26a289
#define _BaseAbilityActor_CanBeDamageByRuntimeid c32c1be7148f42f0abe25e20bba04b89
#define BaseAbilityActor_HealSP b88fec39e90da49b8ce3e7a44489f478
#define _BaseAbilityActor_HealSP c236b96778699e79a447ea92ff886873
#define MonoGoods_Update e16de2591c45e3b40823be801244616c
#define _MonoGoods_Update fc596d29708ea092ac37b63831296480
#define AvatarActor_CanUseSkill fea990f86c9e2eee788b81696483eff1
#define _AvatarActor_CanUseSkill cafbd542ac5e241967b82d527811c104
#define AvatarActor_IsSwitchInCD fc35d1e18bbe2633c9e4d70fe0ecf2fa
#define _AvatarActor_IsSwitchInCD bd59afe8dcfae481b5aa62fcb367a01f
#define LevelDesignManager_BattleBegin b632cdc8b796cd3a7f64436095e7b4e8
#define _LevelDesignManager_BattleBegin e26bbc30e90c0f53432bfd437dad7125
#define LevelDesignManager_EndLevel a6744fc216d5e47ce471984154f406af
#define _LevelDesignManager_EndLevel a7ef070afb635d81967fa35db8bffe31
#define BaseMonoAvatar_Update da426fe58e9d4762a7021b7ec1008590
#define _BaseMonoAvatar_Update b85ddc11d84e58aa49f81ba70b3a72cf
#define BaseMonoAvatar_set_MoveSpeedRatio a9b792378738dda321cb32d189fc9725
#define _BaseMonoAvatar_set_MoveSpeedRatio c1ec6e29e090db09c99803f9b96de91b
#define BaseMonoElf_set_MoveSpeedRatio c1f048c2b01f68e343244412cd2fb28b
#define _BaseMonoElf_set_MoveSpeedRatio c3f89c7537ec867c8e1f4aadee466b15
#define AbilityAvatarWeaponOverHeatMixin_UpdateOverheatDisplayValue b8e6bc6c297187c11c92caaa06516a63
#define _AbilityAvatarWeaponOverHeatMixin_UpdateOverheatDisplayValue caf8215975be3612284fec5f79e4513f
#define BaseAbilityActor_GetProperty cf5337cf1acb7235eddbf3544f8491cc
#define _BaseAbilityActor_GetProperty d2b7349b5b2ba9f247e4114d9240de20
#define LevelDesignManager_SetPause d6d058c8720681aedc5f9eb4c969c0ad
#define _LevelDesignManager_SetPause f75bca77b81687124c35c7c4943db213
#define LevelDesignManager_SetAvatarDefenseRatio a10208c9f4225aabdcb2c37f8b8bd77b
#define _LevelDesignManager_SetAvatarDefenseRatio abf257ab67fcc0fd2496b3d431ef691a
#define AvatarActor_SetAvatarDefenseRatio a758c0a9e4118b3c5111c62c2a5e8125
#define _AvatarActor_SetAvatarDefenseRatio cbdb3577fd018da0a515f9953cd7ac08
#define LevelDesignManager_KillAllMonstersIter ca3750e1683f5db6e1a1af2cc3c487db
#define _LevelDesignManager_KillAllMonstersIter c2765d35d40a4e367dab1138aa138f10
#define LevelDesignManager_ClearAllMonsters bb0e029ecc9d8fccb5102deaf33be220
#define _LevelDesignManager_ClearAllMonsters dea997af2b0f497234fcfa2ce49ccd77
#define MonsterActor_ForceRemoveImmediatelly a8dd66c2cd6ace2270c016e4304fce54
#define _MonsterActor_ForceRemoveImmediatelly c4a2f4779f6e43baa365ca69dcf22f26
#define LevelDesignManager_SetInLevelTimeCountDownSpeedRatio dd78bb857fa234ee3dcc8a77a40b0a4f
#define _LevelDesignManager_SetInLevelTimeCountDownSpeedRatio fa2fbe48ab883e721fa1ce37c74d6c4f
#define LevelActorCountDownPlugin_SetCountDownSpeedRatio bc00df1aed10203fec5878d0d36fc210
#define _LevelActorCountDownPlugin_SetCountDownSpeedRatio f3c164b18f8e1afca87031ef2e9f43a8
#define BaseMonoAvatar_GetFixedAttackSpeedRatio d722fa1f89d74346e41af26ab0978577
#define _BaseMonoAvatar_GetFixedAttackSpeedRatio ec62ec69e13a101aa4e567c2eea442d0
#define ActorAbilityPlugin_GetDynamicFloat e182ecd99bb89a1c5906ca7f12453c2c
#define _ActorAbilityPlugin_GetDynamicFloat db14e3700c5faf7ea0d709a338043535
#define ActorAbilityPlugin_AddDynamicFloat f20b5f43250643d03ba029480b38a520
#define _ActorAbilityPlugin_AddDynamicFloat a93c007880811c8be13ed63d0f3276fb
#define ActorAbilityPlugin_AddDynamicFloatWithRange b53ac38d9a69762cdbd3b46f72d4d3aa
#define _ActorAbilityPlugin_AddDynamicFloatWithRange fa82202f32590f1115d8668aa710220b
#define AbilityShieldMixin_OnShieldChanged cd1d8aa2a7b3d282e1afcdefd6f19d4e
#define _AbilityShieldMixin_OnShieldChanged cbe0bca6c13882ab9a7d615738125687
#define AttackResult_GetTotalDamage c7f1117a7329a5ee2cb36a86aa0cf923
#define _AttackResult_GetTotalDamage b8a2384defaad2ebb52266a895d433f5
#define MonsterActor_OnBeingHitResolve a7e709972dce458be413032c4ca8cee9
#define _MonsterActor_OnBeingHitResolve aeedbf12ee0a8b16bf7621f86563a548

//Const.h
#define Patch f8ff7086beb588177e059f05341392bc
#define Const fc5b824a35f95d809e8a33d4711a6491
#define Down_x38 ee12cf11525d0b31e599f0f0bacc3df9
#define NOP ffbab457b329ea9d9908a836a8f93bb5
#define BX_LR e167559245a806afd0107999b67688d7

//patch/il2cpp.h
#define FirstPatchIl2cpp d50354da4fe656e2e2ff68d7d42cbbd3
#define LoopPatchIl2cpp c5c641866be438072184872cde6f8f1a

//Amend.h
#define Uitls d2fbdcfcf0f86c390b2f96fcb6b13389
#define Amend_B bf8c4ed931d99030ce21a38c25415dc5
#define Amend_ClassGetMethodFromNameFlags ed16f60143f6e011f17e4efb792e10a0
#define Amend_ClassFromName e37f5d4e52d07933278cc040c5fdcf64

//EnumParse.h
#define ParseStageCheatData f25c9ed99ad1a8f4974921f37a791bb1

#endif
