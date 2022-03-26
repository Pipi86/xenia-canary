// Generated with `xb buildshaders`.
#if 0
; SPIR-V
; Version: 1.0
; Generator: Khronos Glslang Reference Front End; 10
; Bound: 24950
; Schema: 0
               OpCapability Shader
          %1 = OpExtInstImport "GLSL.std.450"
               OpMemoryModel Logical GLSL450
               OpEntryPoint Fragment %5663 "main" %gl_FragCoord %5334
               OpExecutionMode %5663 OriginUpperLeft
               OpDecorate %gl_FragCoord BuiltIn FragCoord
               OpMemberDecorate %_struct_1010 0 Offset 16
               OpMemberDecorate %_struct_1010 1 Offset 24
               OpDecorate %_struct_1010 Block
               OpDecorate %5334 Location 0
               OpDecorate %5163 DescriptorSet 0
               OpDecorate %5163 Binding 0
       %void = OpTypeVoid
       %1282 = OpTypeFunction %void
      %float = OpTypeFloat 32
       %uint = OpTypeInt 32 0
        %int = OpTypeInt 32 1
      %v2int = OpTypeVector %int 2
    %v3float = OpTypeVector %float 3
     %v2uint = OpTypeVector %uint 2
    %v4float = OpTypeVector %float 4
%_ptr_Input_v4float = OpTypePointer Input %v4float
%gl_FragCoord = OpVariable %_ptr_Input_v4float Input
    %v2float = OpTypeVector %float 2
%_struct_1010 = OpTypeStruct %v2int %float
%_ptr_PushConstant__struct_1010 = OpTypePointer PushConstant %_struct_1010
       %3052 = OpVariable %_ptr_PushConstant__struct_1010 PushConstant
      %int_0 = OpConstant %int 0
%_ptr_PushConstant_v2int = OpTypePointer PushConstant %v2int
    %float_1 = OpConstant %float 1
    %float_0 = OpConstant %float 0
      %int_1 = OpConstant %int 1
%_ptr_PushConstant_float = OpTypePointer PushConstant %float
     %uint_0 = OpConstant %uint 0
%_ptr_Output_v4float = OpTypePointer Output %v4float
       %5334 = OpVariable %_ptr_Output_v4float Output
%_ptr_Output_float = OpTypePointer Output %float
     %uint_1 = OpConstant %uint 1
     %uint_2 = OpConstant %uint 2
     %uint_3 = OpConstant %uint 3
%uint_532432441 = OpConstant %uint 532432441
%uint_2129690299 = OpConstant %uint 2129690299
%uint_2129764351 = OpConstant %uint 2129764351
    %float_2 = OpConstant %float 2
        %150 = OpTypeImage %float 2D 0 0 0 1 Unknown
%_ptr_UniformConstant_150 = OpTypePointer UniformConstant %150
       %5163 = OpVariable %_ptr_UniformConstant_150 UniformConstant
     %int_n1 = OpConstant %int -1
       %1803 = OpConstantComposite %v2int %int_0 %int_n1
       %1806 = OpConstantComposite %v2int %int_n1 %int_0
       %1824 = OpConstantComposite %v2int %int_1 %int_0
       %1827 = OpConstantComposite %v2int %int_0 %int_1
    %float_4 = OpConstant %float 4
       %5663 = OpFunction %void None %1282
      %24949 = OpLabel
      %18571 = OpLoad %v4float %gl_FragCoord
      %14008 = OpVectorShuffle %v2float %18571 %18571 0 1
      %17656 = OpConvertFToS %v2int %14008
      %19279 = OpAccessChain %_ptr_PushConstant_v2int %3052 %int_0
      %22822 = OpLoad %v2int %19279
      %23312 = OpISub %v2int %17656 %22822
       %9938 = OpBitcast %v2uint %23312
      %20997 = OpAccessChain %_ptr_PushConstant_float %3052 %int_1
      %22237 = OpLoad %float %20997
      %16454 = OpBitcast %uint %22237
       %6990 = OpBitcast %v2int %9938
      %14365 = OpIAdd %v2int %6990 %1803
      %23057 = OpLoad %150 %5163
      %20105 = OpImageFetch %v4float %23057 %14365 Lod %int_0
       %7465 = OpIAdd %v2int %6990 %1806
      %23314 = OpImageFetch %v4float %23057 %7465 Lod %int_0
      %17196 = OpImageFetch %v4float %23057 %6990 Lod %int_0
      %16142 = OpIAdd %v2int %6990 %1824
      %16978 = OpImageFetch %v4float %23057 %16142 Lod %int_0
      %19264 = OpIAdd %v2int %6990 %1827
      %24843 = OpImageFetch %v4float %23057 %19264 Lod %int_0
       %6266 = OpCompositeExtract %float %20105 0
       %7025 = OpCompositeExtract %float %20105 1
      %18723 = OpCompositeExtract %float %20105 2
      %24863 = OpFMul %float %6266 %6266
      %16184 = OpFMul %float %7025 %7025
       %9305 = OpFMul %float %18723 %18723
      %22236 = OpCompositeExtract %float %23314 0
      %11844 = OpCompositeExtract %float %23314 1
      %18724 = OpCompositeExtract %float %23314 2
      %24864 = OpFMul %float %22236 %22236
      %16185 = OpFMul %float %11844 %11844
       %9306 = OpFMul %float %18724 %18724
      %22238 = OpCompositeExtract %float %17196 0
      %11845 = OpCompositeExtract %float %17196 1
      %18725 = OpCompositeExtract %float %17196 2
      %24865 = OpFMul %float %22238 %22238
      %16186 = OpFMul %float %11845 %11845
       %9307 = OpFMul %float %18725 %18725
      %22239 = OpCompositeExtract %float %16978 0
      %11846 = OpCompositeExtract %float %16978 1
      %18726 = OpCompositeExtract %float %16978 2
      %24866 = OpFMul %float %22239 %22239
      %16187 = OpFMul %float %11846 %11846
       %9308 = OpFMul %float %18726 %18726
      %22240 = OpCompositeExtract %float %24843 0
      %11847 = OpCompositeExtract %float %24843 1
      %18727 = OpCompositeExtract %float %24843 2
      %24867 = OpFMul %float %22240 %22240
      %14910 = OpFMul %float %11847 %11847
       %8590 = OpFMul %float %18727 %18727
      %10877 = OpExtInst %float %1 FMin %16186 %16187
       %9276 = OpExtInst %float %1 FMin %16185 %10877
      %15951 = OpExtInst %float %1 FMin %16184 %14910
      %10905 = OpExtInst %float %1 FMin %9276 %15951
      %24296 = OpExtInst %float %1 FMax %16186 %16187
      %17523 = OpExtInst %float %1 FMax %16185 %24296
      %23939 = OpExtInst %float %1 FMax %16184 %14910
      %21101 = OpExtInst %float %1 FMax %17523 %23939
       %8181 = OpBitcast %uint %21101
       %8951 = OpISub %uint %uint_2129690299 %8181
       %6465 = OpBitcast %float %8951
      %24131 = OpFSub %float %float_1 %21101
      %23324 = OpExtInst %float %1 FMin %10905 %24131
      %22903 = OpFMul %float %23324 %6465
      %20683 = OpExtInst %float %1 FClamp %22903 %float_0 %float_1
      %24011 = OpBitcast %uint %20683
      %22090 = OpShiftRightLogical %uint %24011 %uint_1
      %23229 = OpIAdd %uint %22090 %uint_532432441
      %21692 = OpBitcast %float %23229
      %19558 = OpBitcast %float %16454
      %18803 = OpFMul %float %21692 %19558
      %23316 = OpFMul %float %float_4 %18803
      %16498 = OpFAdd %float %float_1 %23316
       %6551 = OpBitcast %uint %16498
       %7563 = OpISub %uint %uint_2129764351 %6551
       %9419 = OpBitcast %float %7563
       %9130 = OpFNegate %float %9419
      %12367 = OpFMul %float %9130 %16498
      %16540 = OpFAdd %float %12367 %float_2
       %9366 = OpFMul %float %9419 %16540
      %18845 = OpFAdd %float %24863 %24864
      %23143 = OpFAdd %float %18845 %24866
       %6535 = OpFAdd %float %23143 %24867
      %12673 = OpFMul %float %18803 %6535
      %15973 = OpFAdd %float %12673 %24865
       %8137 = OpFMul %float %15973 %9366
      %15142 = OpExtInst %float %1 FClamp %8137 %float_0 %float_1
      %13381 = OpFAdd %float %16184 %16185
      %12943 = OpFAdd %float %13381 %16187
       %6536 = OpFAdd %float %12943 %14910
      %12674 = OpFMul %float %18803 %6536
      %15974 = OpFAdd %float %12674 %16186
       %8138 = OpFMul %float %15974 %9366
      %15143 = OpExtInst %float %1 FClamp %8138 %float_0 %float_1
      %13382 = OpFAdd %float %9305 %9306
      %12944 = OpFAdd %float %13382 %9308
       %6537 = OpFAdd %float %12944 %8590
      %12675 = OpFMul %float %18803 %6537
      %15975 = OpFAdd %float %12675 %9307
       %6921 = OpFMul %float %15975 %9366
      %24941 = OpExtInst %float %1 FClamp %6921 %float_0 %float_1
      %20577 = OpAccessChain %_ptr_Output_float %5334 %uint_0
               OpStore %20577 %15142
      %19732 = OpAccessChain %_ptr_Output_float %5334 %uint_1
               OpStore %19732 %15143
      %19656 = OpAccessChain %_ptr_Output_float %5334 %uint_2
               OpStore %19656 %24941
      %10445 = OpLoad %v4float %5334
       %9111 = OpVectorShuffle %v3float %10445 %10445 0 1 2
      %17911 = OpExtInst %v3float %1 Sqrt %9111
       %7131 = OpCompositeExtract %float %17911 0
               OpStore %20577 %7131
      %22435 = OpCompositeExtract %float %17911 1
               OpStore %19732 %22435
      %22131 = OpCompositeExtract %float %17911 2
               OpStore %19656 %22131
      %23294 = OpAccessChain %_ptr_Output_float %5334 %uint_3
               OpStore %23294 %float_1
               OpReturn
               OpFunctionEnd
#endif

const uint32_t guest_output_ffx_cas_sharpen_ps[] = {
    0x07230203, 0x00010000, 0x0008000A, 0x00006176, 0x00000000, 0x00020011,
    0x00000001, 0x0006000B, 0x00000001, 0x4C534C47, 0x6474732E, 0x3035342E,
    0x00000000, 0x0003000E, 0x00000000, 0x00000001, 0x0007000F, 0x00000004,
    0x0000161F, 0x6E69616D, 0x00000000, 0x00000C93, 0x000014D6, 0x00030010,
    0x0000161F, 0x00000007, 0x00040047, 0x00000C93, 0x0000000B, 0x0000000F,
    0x00050048, 0x000003F2, 0x00000000, 0x00000023, 0x00000010, 0x00050048,
    0x000003F2, 0x00000001, 0x00000023, 0x00000018, 0x00030047, 0x000003F2,
    0x00000002, 0x00040047, 0x000014D6, 0x0000001E, 0x00000000, 0x00040047,
    0x0000142B, 0x00000022, 0x00000000, 0x00040047, 0x0000142B, 0x00000021,
    0x00000000, 0x00020013, 0x00000008, 0x00030021, 0x00000502, 0x00000008,
    0x00030016, 0x0000000D, 0x00000020, 0x00040015, 0x0000000B, 0x00000020,
    0x00000000, 0x00040015, 0x0000000C, 0x00000020, 0x00000001, 0x00040017,
    0x00000012, 0x0000000C, 0x00000002, 0x00040017, 0x00000018, 0x0000000D,
    0x00000003, 0x00040017, 0x00000011, 0x0000000B, 0x00000002, 0x00040017,
    0x0000001D, 0x0000000D, 0x00000004, 0x00040020, 0x0000029A, 0x00000001,
    0x0000001D, 0x0004003B, 0x0000029A, 0x00000C93, 0x00000001, 0x00040017,
    0x00000013, 0x0000000D, 0x00000002, 0x0004001E, 0x000003F2, 0x00000012,
    0x0000000D, 0x00040020, 0x0000066F, 0x00000009, 0x000003F2, 0x0004003B,
    0x0000066F, 0x00000BEC, 0x00000009, 0x0004002B, 0x0000000C, 0x00000A0B,
    0x00000000, 0x00040020, 0x0000028F, 0x00000009, 0x00000012, 0x0004002B,
    0x0000000D, 0x0000008A, 0x3F800000, 0x0004002B, 0x0000000D, 0x00000A0C,
    0x00000000, 0x0004002B, 0x0000000C, 0x00000A0E, 0x00000001, 0x00040020,
    0x0000028A, 0x00000009, 0x0000000D, 0x0004002B, 0x0000000B, 0x00000A0A,
    0x00000000, 0x00040020, 0x0000029B, 0x00000003, 0x0000001D, 0x0004003B,
    0x0000029B, 0x000014D6, 0x00000003, 0x00040020, 0x0000028B, 0x00000003,
    0x0000000D, 0x0004002B, 0x0000000B, 0x00000A0D, 0x00000001, 0x0004002B,
    0x0000000B, 0x00000A10, 0x00000002, 0x0004002B, 0x0000000B, 0x00000A13,
    0x00000003, 0x0004002B, 0x0000000B, 0x0000020D, 0x1FBC4639, 0x0004002B,
    0x0000000B, 0x00000344, 0x7EF07EBB, 0x0004002B, 0x0000000B, 0x000000B2,
    0x7EF19FFF, 0x0004002B, 0x0000000D, 0x00000019, 0x40000000, 0x00090019,
    0x00000096, 0x0000000D, 0x00000001, 0x00000000, 0x00000000, 0x00000000,
    0x00000001, 0x00000000, 0x00040020, 0x00000313, 0x00000000, 0x00000096,
    0x0004003B, 0x00000313, 0x0000142B, 0x00000000, 0x0004002B, 0x0000000C,
    0x00000A08, 0xFFFFFFFF, 0x0005002C, 0x00000012, 0x0000070B, 0x00000A0B,
    0x00000A08, 0x0005002C, 0x00000012, 0x0000070E, 0x00000A08, 0x00000A0B,
    0x0005002C, 0x00000012, 0x00000720, 0x00000A0E, 0x00000A0B, 0x0005002C,
    0x00000012, 0x00000723, 0x00000A0B, 0x00000A0E, 0x0004002B, 0x0000000D,
    0x00000B69, 0x40800000, 0x00050036, 0x00000008, 0x0000161F, 0x00000000,
    0x00000502, 0x000200F8, 0x00006175, 0x0004003D, 0x0000001D, 0x0000488B,
    0x00000C93, 0x0007004F, 0x00000013, 0x000036B8, 0x0000488B, 0x0000488B,
    0x00000000, 0x00000001, 0x0004006E, 0x00000012, 0x000044F8, 0x000036B8,
    0x00050041, 0x0000028F, 0x00004B4F, 0x00000BEC, 0x00000A0B, 0x0004003D,
    0x00000012, 0x00005926, 0x00004B4F, 0x00050082, 0x00000012, 0x00005B10,
    0x000044F8, 0x00005926, 0x0004007C, 0x00000011, 0x000026D2, 0x00005B10,
    0x00050041, 0x0000028A, 0x00005205, 0x00000BEC, 0x00000A0E, 0x0004003D,
    0x0000000D, 0x000056DD, 0x00005205, 0x0004007C, 0x0000000B, 0x00004046,
    0x000056DD, 0x0004007C, 0x00000012, 0x00001B4E, 0x000026D2, 0x00050080,
    0x00000012, 0x0000381D, 0x00001B4E, 0x0000070B, 0x0004003D, 0x00000096,
    0x00005A11, 0x0000142B, 0x0007005F, 0x0000001D, 0x00004E89, 0x00005A11,
    0x0000381D, 0x00000002, 0x00000A0B, 0x00050080, 0x00000012, 0x00001D29,
    0x00001B4E, 0x0000070E, 0x0007005F, 0x0000001D, 0x00005B12, 0x00005A11,
    0x00001D29, 0x00000002, 0x00000A0B, 0x0007005F, 0x0000001D, 0x0000432C,
    0x00005A11, 0x00001B4E, 0x00000002, 0x00000A0B, 0x00050080, 0x00000012,
    0x00003F0E, 0x00001B4E, 0x00000720, 0x0007005F, 0x0000001D, 0x00004252,
    0x00005A11, 0x00003F0E, 0x00000002, 0x00000A0B, 0x00050080, 0x00000012,
    0x00004B40, 0x00001B4E, 0x00000723, 0x0007005F, 0x0000001D, 0x0000610B,
    0x00005A11, 0x00004B40, 0x00000002, 0x00000A0B, 0x00050051, 0x0000000D,
    0x0000187A, 0x00004E89, 0x00000000, 0x00050051, 0x0000000D, 0x00001B71,
    0x00004E89, 0x00000001, 0x00050051, 0x0000000D, 0x00004923, 0x00004E89,
    0x00000002, 0x00050085, 0x0000000D, 0x0000611F, 0x0000187A, 0x0000187A,
    0x00050085, 0x0000000D, 0x00003F38, 0x00001B71, 0x00001B71, 0x00050085,
    0x0000000D, 0x00002459, 0x00004923, 0x00004923, 0x00050051, 0x0000000D,
    0x000056DC, 0x00005B12, 0x00000000, 0x00050051, 0x0000000D, 0x00002E44,
    0x00005B12, 0x00000001, 0x00050051, 0x0000000D, 0x00004924, 0x00005B12,
    0x00000002, 0x00050085, 0x0000000D, 0x00006120, 0x000056DC, 0x000056DC,
    0x00050085, 0x0000000D, 0x00003F39, 0x00002E44, 0x00002E44, 0x00050085,
    0x0000000D, 0x0000245A, 0x00004924, 0x00004924, 0x00050051, 0x0000000D,
    0x000056DE, 0x0000432C, 0x00000000, 0x00050051, 0x0000000D, 0x00002E45,
    0x0000432C, 0x00000001, 0x00050051, 0x0000000D, 0x00004925, 0x0000432C,
    0x00000002, 0x00050085, 0x0000000D, 0x00006121, 0x000056DE, 0x000056DE,
    0x00050085, 0x0000000D, 0x00003F3A, 0x00002E45, 0x00002E45, 0x00050085,
    0x0000000D, 0x0000245B, 0x00004925, 0x00004925, 0x00050051, 0x0000000D,
    0x000056DF, 0x00004252, 0x00000000, 0x00050051, 0x0000000D, 0x00002E46,
    0x00004252, 0x00000001, 0x00050051, 0x0000000D, 0x00004926, 0x00004252,
    0x00000002, 0x00050085, 0x0000000D, 0x00006122, 0x000056DF, 0x000056DF,
    0x00050085, 0x0000000D, 0x00003F3B, 0x00002E46, 0x00002E46, 0x00050085,
    0x0000000D, 0x0000245C, 0x00004926, 0x00004926, 0x00050051, 0x0000000D,
    0x000056E0, 0x0000610B, 0x00000000, 0x00050051, 0x0000000D, 0x00002E47,
    0x0000610B, 0x00000001, 0x00050051, 0x0000000D, 0x00004927, 0x0000610B,
    0x00000002, 0x00050085, 0x0000000D, 0x00006123, 0x000056E0, 0x000056E0,
    0x00050085, 0x0000000D, 0x00003A3E, 0x00002E47, 0x00002E47, 0x00050085,
    0x0000000D, 0x0000218E, 0x00004927, 0x00004927, 0x0007000C, 0x0000000D,
    0x00002A7D, 0x00000001, 0x00000025, 0x00003F3A, 0x00003F3B, 0x0007000C,
    0x0000000D, 0x0000243C, 0x00000001, 0x00000025, 0x00003F39, 0x00002A7D,
    0x0007000C, 0x0000000D, 0x00003E4F, 0x00000001, 0x00000025, 0x00003F38,
    0x00003A3E, 0x0007000C, 0x0000000D, 0x00002A99, 0x00000001, 0x00000025,
    0x0000243C, 0x00003E4F, 0x0007000C, 0x0000000D, 0x00005EE8, 0x00000001,
    0x00000028, 0x00003F3A, 0x00003F3B, 0x0007000C, 0x0000000D, 0x00004473,
    0x00000001, 0x00000028, 0x00003F39, 0x00005EE8, 0x0007000C, 0x0000000D,
    0x00005D83, 0x00000001, 0x00000028, 0x00003F38, 0x00003A3E, 0x0007000C,
    0x0000000D, 0x0000526D, 0x00000001, 0x00000028, 0x00004473, 0x00005D83,
    0x0004007C, 0x0000000B, 0x00001FF5, 0x0000526D, 0x00050082, 0x0000000B,
    0x000022F7, 0x00000344, 0x00001FF5, 0x0004007C, 0x0000000D, 0x00001941,
    0x000022F7, 0x00050083, 0x0000000D, 0x00005E43, 0x0000008A, 0x0000526D,
    0x0007000C, 0x0000000D, 0x00005B1C, 0x00000001, 0x00000025, 0x00002A99,
    0x00005E43, 0x00050085, 0x0000000D, 0x00005977, 0x00005B1C, 0x00001941,
    0x0008000C, 0x0000000D, 0x000050CB, 0x00000001, 0x0000002B, 0x00005977,
    0x00000A0C, 0x0000008A, 0x0004007C, 0x0000000B, 0x00005DCB, 0x000050CB,
    0x000500C2, 0x0000000B, 0x0000564A, 0x00005DCB, 0x00000A0D, 0x00050080,
    0x0000000B, 0x00005ABD, 0x0000564A, 0x0000020D, 0x0004007C, 0x0000000D,
    0x000054BC, 0x00005ABD, 0x0004007C, 0x0000000D, 0x00004C66, 0x00004046,
    0x00050085, 0x0000000D, 0x00004973, 0x000054BC, 0x00004C66, 0x00050085,
    0x0000000D, 0x00005B14, 0x00000B69, 0x00004973, 0x00050081, 0x0000000D,
    0x00004072, 0x0000008A, 0x00005B14, 0x0004007C, 0x0000000B, 0x00001997,
    0x00004072, 0x00050082, 0x0000000B, 0x00001D8B, 0x000000B2, 0x00001997,
    0x0004007C, 0x0000000D, 0x000024CB, 0x00001D8B, 0x0004007F, 0x0000000D,
    0x000023AA, 0x000024CB, 0x00050085, 0x0000000D, 0x0000304F, 0x000023AA,
    0x00004072, 0x00050081, 0x0000000D, 0x0000409C, 0x0000304F, 0x00000019,
    0x00050085, 0x0000000D, 0x00002496, 0x000024CB, 0x0000409C, 0x00050081,
    0x0000000D, 0x0000499D, 0x0000611F, 0x00006120, 0x00050081, 0x0000000D,
    0x00005A67, 0x0000499D, 0x00006122, 0x00050081, 0x0000000D, 0x00001987,
    0x00005A67, 0x00006123, 0x00050085, 0x0000000D, 0x00003181, 0x00004973,
    0x00001987, 0x00050081, 0x0000000D, 0x00003E65, 0x00003181, 0x00006121,
    0x00050085, 0x0000000D, 0x00001FC9, 0x00003E65, 0x00002496, 0x0008000C,
    0x0000000D, 0x00003B26, 0x00000001, 0x0000002B, 0x00001FC9, 0x00000A0C,
    0x0000008A, 0x00050081, 0x0000000D, 0x00003445, 0x00003F38, 0x00003F39,
    0x00050081, 0x0000000D, 0x0000328F, 0x00003445, 0x00003F3B, 0x00050081,
    0x0000000D, 0x00001988, 0x0000328F, 0x00003A3E, 0x00050085, 0x0000000D,
    0x00003182, 0x00004973, 0x00001988, 0x00050081, 0x0000000D, 0x00003E66,
    0x00003182, 0x00003F3A, 0x00050085, 0x0000000D, 0x00001FCA, 0x00003E66,
    0x00002496, 0x0008000C, 0x0000000D, 0x00003B27, 0x00000001, 0x0000002B,
    0x00001FCA, 0x00000A0C, 0x0000008A, 0x00050081, 0x0000000D, 0x00003446,
    0x00002459, 0x0000245A, 0x00050081, 0x0000000D, 0x00003290, 0x00003446,
    0x0000245C, 0x00050081, 0x0000000D, 0x00001989, 0x00003290, 0x0000218E,
    0x00050085, 0x0000000D, 0x00003183, 0x00004973, 0x00001989, 0x00050081,
    0x0000000D, 0x00003E67, 0x00003183, 0x0000245B, 0x00050085, 0x0000000D,
    0x00001B09, 0x00003E67, 0x00002496, 0x0008000C, 0x0000000D, 0x0000616D,
    0x00000001, 0x0000002B, 0x00001B09, 0x00000A0C, 0x0000008A, 0x00050041,
    0x0000028B, 0x00005061, 0x000014D6, 0x00000A0A, 0x0003003E, 0x00005061,
    0x00003B26, 0x00050041, 0x0000028B, 0x00004D14, 0x000014D6, 0x00000A0D,
    0x0003003E, 0x00004D14, 0x00003B27, 0x00050041, 0x0000028B, 0x00004CC8,
    0x000014D6, 0x00000A10, 0x0003003E, 0x00004CC8, 0x0000616D, 0x0004003D,
    0x0000001D, 0x000028CD, 0x000014D6, 0x0008004F, 0x00000018, 0x00002397,
    0x000028CD, 0x000028CD, 0x00000000, 0x00000001, 0x00000002, 0x0006000C,
    0x00000018, 0x000045F7, 0x00000001, 0x0000001F, 0x00002397, 0x00050051,
    0x0000000D, 0x00001BDB, 0x000045F7, 0x00000000, 0x0003003E, 0x00005061,
    0x00001BDB, 0x00050051, 0x0000000D, 0x000057A3, 0x000045F7, 0x00000001,
    0x0003003E, 0x00004D14, 0x000057A3, 0x00050051, 0x0000000D, 0x00005673,
    0x000045F7, 0x00000002, 0x0003003E, 0x00004CC8, 0x00005673, 0x00050041,
    0x0000028B, 0x00005AFE, 0x000014D6, 0x00000A13, 0x0003003E, 0x00005AFE,
    0x0000008A, 0x000100FD, 0x00010038,
};
