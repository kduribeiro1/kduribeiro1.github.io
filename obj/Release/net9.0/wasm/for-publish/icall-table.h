#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
184,
193,
194,
195,
196,
197,
198,
199,
201,
202,
258,
259,
260,
283,
284,
285,
301,
302,
303,
389,
390,
391,
394,
424,
425,
427,
429,
431,
433,
438,
446,
447,
448,
449,
450,
451,
452,
453,
528,
535,
536,
604,
610,
613,
615,
620,
621,
623,
624,
628,
629,
631,
632,
635,
636,
637,
640,
642,
645,
647,
649,
658,
716,
718,
720,
730,
731,
732,
734,
739,
740,
741,
742,
743,
751,
752,
753,
757,
758,
760,
762,
952,
1105,
1106,
6794,
6795,
6797,
6798,
6799,
6800,
6801,
6803,
6804,
6805,
6820,
6822,
6827,
6829,
6831,
6833,
6884,
6885,
6887,
6888,
6889,
6890,
6891,
6893,
6895,
7847,
7851,
7853,
7854,
7855,
7856,
8239,
8240,
8241,
8242,
8258,
8259,
8260,
8303,
8368,
8378,
8379,
8380,
8381,
8382,
8653,
8657,
8658,
8685,
8719,
8726,
8733,
8744,
8747,
8768,
8843,
8845,
8854,
8856,
8857,
8864,
8879,
8899,
8900,
8908,
8910,
8917,
8918,
8921,
8926,
8932,
8933,
8940,
8942,
8954,
8957,
8958,
8959,
8970,
8980,
8986,
8987,
8988,
8990,
8991,
9008,
9010,
9025,
9043,
9070,
9094,
9095,
9559,
9638,
9639,
9791,
9792,
9796,
9799,
9844,
10223,
10224,
10420,
10425,
10435,
11058,
11079,
11081,
11083,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 184,
ves_icall_System_Array_InternalCreate,
// token 193,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 194,
ves_icall_System_Array_CanChangePrimitive,
// token 195,
ves_icall_System_Array_FastCopy,
// token 196,
ves_icall_System_Array_GetLengthInternal_raw,
// token 197,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 198,
ves_icall_System_Array_GetGenericValue_icall,
// token 199,
ves_icall_System_Array_GetValueImpl_raw,
// token 201,
ves_icall_System_Array_SetValueImpl_raw,
// token 202,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 258,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 259,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 260,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 283,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 284,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 285,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 301,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 302,
ves_icall_System_Enum_InternalGetCorElementType,
// token 303,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 389,
ves_icall_System_Environment_get_ProcessorCount,
// token 390,
ves_icall_System_Environment_get_TickCount,
// token 391,
ves_icall_System_Environment_get_TickCount64,
// token 394,
ves_icall_System_Environment_FailFast_raw,
// token 424,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 425,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 427,
ves_icall_System_GC_SuppressFinalize_raw,
// token 429,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 431,
ves_icall_System_GC_GetGCMemoryInfo,
// token 433,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 438,
ves_icall_System_Object_MemberwiseClone_raw,
// token 446,
ves_icall_System_Math_Ceiling,
// token 447,
ves_icall_System_Math_Cos,
// token 448,
ves_icall_System_Math_Floor,
// token 449,
ves_icall_System_Math_Pow,
// token 450,
ves_icall_System_Math_Sin,
// token 451,
ves_icall_System_Math_Sqrt,
// token 452,
ves_icall_System_Math_Tan,
// token 453,
ves_icall_System_Math_ModF,
// token 528,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 535,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 536,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 604,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 610,
ves_icall_RuntimeType_make_array_type_raw,
// token 613,
ves_icall_RuntimeType_make_byref_type_raw,
// token 615,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 620,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 621,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 623,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 624,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 628,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 629,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 631,
ves_icall_System_RuntimeType_getFullName_raw,
// token 632,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 635,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 636,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 637,
ves_icall_RuntimeType_GetFields_native_raw,
// token 640,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 642,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 645,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 647,
ves_icall_RuntimeType_GetName_raw,
// token 649,
ves_icall_RuntimeType_GetNamespace_raw,
// token 658,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 716,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 718,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 720,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 730,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 731,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 732,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 734,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 739,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 740,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 741,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 742,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 743,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 751,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 752,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 753,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 757,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 758,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 760,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 762,
ves_icall_System_String_FastAllocateString_raw,
// token 952,
ves_icall_System_Type_internal_from_handle_raw,
// token 1105,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1106,
ves_icall_System_ValueType_Equals_raw,
// token 6794,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6795,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6797,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6798,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6799,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6800,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6801,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6803,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6804,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6805,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6820,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6822,
mono_monitor_exit_icall_raw,
// token 6827,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6829,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6831,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6833,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6884,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6885,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6887,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6888,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6889,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6890,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6891,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6893,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6895,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7847,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7851,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7853,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7854,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7855,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7856,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8239,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8240,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8241,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8242,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8258,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8259,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8260,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8303,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8368,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8378,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8379,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8380,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8381,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8382,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 8653,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8657,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8658,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8685,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8719,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8726,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8733,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8744,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8747,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8768,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8843,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8845,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8854,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8856,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8857,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8864,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8879,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8899,
ves_icall_reflection_get_token_raw,
// token 8900,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8908,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8910,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8917,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8918,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8921,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8926,
ves_icall_reflection_get_token_raw,
// token 8932,
ves_icall_get_method_info_raw,
// token 8933,
ves_icall_get_method_attributes,
// token 8940,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8942,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8954,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8957,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8958,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8959,
ves_icall_reflection_get_token_raw,
// token 8970,
ves_icall_InternalInvoke_raw,
// token 8980,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8986,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8987,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8988,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8990,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8991,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9008,
ves_icall_InvokeClassConstructor_raw,
// token 9010,
ves_icall_InternalInvoke_raw,
// token 9025,
ves_icall_reflection_get_token_raw,
// token 9043,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9070,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9094,
ves_icall_reflection_get_token_raw,
// token 9095,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9559,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9638,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9639,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9791,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9792,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9796,
ves_icall_ModuleBuilder_getToken_raw,
// token 9799,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9844,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10223,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10224,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10420,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 10425,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10435,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11058,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11079,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11081,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11083,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
};
