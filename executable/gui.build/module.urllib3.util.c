/* Generated code for Python source for module 'urllib3.util'
 * created by Nuitka version 0.5.32.7
 *
 * This code is in part copyright 2018 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_urllib3$util is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util;
PyDictObject *moduledict_urllib3$util;

/* The module constants used, if any. */
static PyObject *const_tuple_a8f4bf95f064877135b9f41c797b793b_tuple;
static PyObject *const_str_digest_7921c50912a901784d39dd11ac42768a;
extern PyObject *const_str_plain_request;
extern PyObject *const_tuple_str_plain_Retry_tuple;
static PyObject *const_str_digest_b5574d1589a11641ad249f9f86b00dd3;
static PyObject *const_list_str_digest_35d0118dcc54861086b191cdca450929_list;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_35d0118dcc54861086b191cdca450929;
extern PyObject *const_str_digest_867cf107290997ea3f46e9cff397e1db;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_resolve_ssl_version;
extern PyObject *const_str_plain_ssl_wrap_socket;
static PyObject *const_tuple_str_plain_is_fp_closed_tuple;
extern PyObject *const_str_plain_wait_for_read;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_connection;
extern PyObject *const_str_plain_parse_url;
extern PyObject *const_str_plain_SSLContext;
extern PyObject *const_str_plain_HAS_SNI;
extern PyObject *const_str_plain_IS_SECURETRANSPORT;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_resolve_cert_reqs;
static PyObject *const_tuple_49344022abd0df42d598d0e15205f3da_tuple;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_wait;
extern PyObject *const_str_plain_current_time;
extern PyObject *const_str_plain_split_first;
extern PyObject *const_str_plain_wait_for_write;
extern PyObject *const_str_plain_IS_PYOPENSSL;
extern PyObject *const_str_plain_Timeout;
extern PyObject *const_str_plain_is_fp_closed;
static PyObject *const_str_plain_retry;
extern PyObject *const_str_plain_is_connection_dropped;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_assert_fingerprint;
extern PyObject *const_str_plain_make_headers;
extern PyObject *const_str_plain_ssl_;
extern PyObject *const_tuple_str_plain_make_headers_tuple;
extern PyObject *const_tuple_str_plain_is_connection_dropped_tuple;
extern PyObject *const_str_plain_Retry;
extern PyObject *const_str_plain_get_host;
static PyObject *const_tuple_str_plain_wait_for_read_str_plain_wait_for_write_tuple;
extern PyObject *const_str_plain_Url;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_d9f55eb6f47613ec7fa8c938d9d722ac_tuple;
static PyObject *const_tuple_str_plain_current_time_str_plain_Timeout_tuple;
extern PyObject *const_str_plain_timeout;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_a8f4bf95f064877135b9f41c797b793b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_a8f4bf95f064877135b9f41c797b793b_tuple, 0, const_str_plain_get_host ); Py_INCREF( const_str_plain_get_host );
    PyTuple_SET_ITEM( const_tuple_a8f4bf95f064877135b9f41c797b793b_tuple, 1, const_str_plain_parse_url ); Py_INCREF( const_str_plain_parse_url );
    PyTuple_SET_ITEM( const_tuple_a8f4bf95f064877135b9f41c797b793b_tuple, 2, const_str_plain_split_first ); Py_INCREF( const_str_plain_split_first );
    PyTuple_SET_ITEM( const_tuple_a8f4bf95f064877135b9f41c797b793b_tuple, 3, const_str_plain_Url ); Py_INCREF( const_str_plain_Url );
    const_str_digest_7921c50912a901784d39dd11ac42768a = UNSTREAM_STRING( &constant_bin[ 924595 ], 21, 0 );
    const_str_digest_b5574d1589a11641ad249f9f86b00dd3 = UNSTREAM_STRING( &constant_bin[ 924616 ], 65, 0 );
    const_list_str_digest_35d0118dcc54861086b191cdca450929_list = PyList_New( 1 );
    const_str_digest_35d0118dcc54861086b191cdca450929 = UNSTREAM_STRING( &constant_bin[ 924616 ], 53, 0 );
    PyList_SET_ITEM( const_list_str_digest_35d0118dcc54861086b191cdca450929_list, 0, const_str_digest_35d0118dcc54861086b191cdca450929 ); Py_INCREF( const_str_digest_35d0118dcc54861086b191cdca450929 );
    const_tuple_str_plain_is_fp_closed_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_is_fp_closed_tuple, 0, const_str_plain_is_fp_closed ); Py_INCREF( const_str_plain_is_fp_closed );
    const_tuple_49344022abd0df42d598d0e15205f3da_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_49344022abd0df42d598d0e15205f3da_tuple, 0, const_str_plain_SSLContext ); Py_INCREF( const_str_plain_SSLContext );
    PyTuple_SET_ITEM( const_tuple_49344022abd0df42d598d0e15205f3da_tuple, 1, const_str_plain_HAS_SNI ); Py_INCREF( const_str_plain_HAS_SNI );
    PyTuple_SET_ITEM( const_tuple_49344022abd0df42d598d0e15205f3da_tuple, 2, const_str_plain_IS_PYOPENSSL ); Py_INCREF( const_str_plain_IS_PYOPENSSL );
    PyTuple_SET_ITEM( const_tuple_49344022abd0df42d598d0e15205f3da_tuple, 3, const_str_plain_IS_SECURETRANSPORT ); Py_INCREF( const_str_plain_IS_SECURETRANSPORT );
    PyTuple_SET_ITEM( const_tuple_49344022abd0df42d598d0e15205f3da_tuple, 4, const_str_plain_assert_fingerprint ); Py_INCREF( const_str_plain_assert_fingerprint );
    PyTuple_SET_ITEM( const_tuple_49344022abd0df42d598d0e15205f3da_tuple, 5, const_str_plain_resolve_cert_reqs ); Py_INCREF( const_str_plain_resolve_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_49344022abd0df42d598d0e15205f3da_tuple, 6, const_str_plain_resolve_ssl_version ); Py_INCREF( const_str_plain_resolve_ssl_version );
    PyTuple_SET_ITEM( const_tuple_49344022abd0df42d598d0e15205f3da_tuple, 7, const_str_plain_ssl_wrap_socket ); Py_INCREF( const_str_plain_ssl_wrap_socket );
    const_str_plain_retry = UNSTREAM_STRING( &constant_bin[ 786531 ], 5, 1 );
    const_tuple_str_plain_wait_for_read_str_plain_wait_for_write_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_wait_for_read_str_plain_wait_for_write_tuple, 0, const_str_plain_wait_for_read ); Py_INCREF( const_str_plain_wait_for_read );
    PyTuple_SET_ITEM( const_tuple_str_plain_wait_for_read_str_plain_wait_for_write_tuple, 1, const_str_plain_wait_for_write ); Py_INCREF( const_str_plain_wait_for_write );
    const_tuple_d9f55eb6f47613ec7fa8c938d9d722ac_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 924681 ], 285 );
    const_tuple_str_plain_current_time_str_plain_Timeout_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_current_time_str_plain_Timeout_tuple, 0, const_str_plain_current_time ); Py_INCREF( const_str_plain_current_time );
    PyTuple_SET_ITEM( const_tuple_str_plain_current_time_str_plain_Timeout_tuple, 1, const_str_plain_Timeout ); Py_INCREF( const_str_plain_Timeout );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_333fff1b05d3e0713bdda1a9608101ae;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_b5574d1589a11641ad249f9f86b00dd3;
    codeobj_333fff1b05d3e0713bdda1a9608101ae = MAKE_CODEOBJ( module_filename_obj, const_str_digest_7921c50912a901784d39dd11ac42768a, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;

extern PyObject *const_str_plain___loader__;
extern PyObject *metapath_based_loader;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( urllib3$util )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("urllib3.util: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util = Py_InitModule4(
        "urllib3.util",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$util = PyModule_Create( &mdef_urllib3$util );
#endif

    moduledict_urllib3$util = MODULE_DICT( module_urllib3$util );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$util,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$util );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_867cf107290997ea3f46e9cff397e1db, module_urllib3$util );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    struct Nuitka_FrameObject *frame_333fff1b05d3e0713bdda1a9608101ae;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_b5574d1589a11641ad249f9f86b00dd3;
    UPDATE_STRING_DICT0( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_35d0118dcc54861086b191cdca450929_list );
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_333fff1b05d3e0713bdda1a9608101ae = MAKE_MODULE_FRAME( codeobj_333fff1b05d3e0713bdda1a9608101ae, module_urllib3$util );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_333fff1b05d3e0713bdda1a9608101ae );
    assert( Py_REFCNT( frame_333fff1b05d3e0713bdda1a9608101ae ) == 2 );

    // Framed code:
    frame_333fff1b05d3e0713bdda1a9608101ae->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( !(tmp_import_name_from_1 == NULL) );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_name_name_1 = const_str_plain_connection;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_is_connection_dropped_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_333fff1b05d3e0713bdda1a9608101ae->m_frame.f_lineno = 3;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_is_connection_dropped,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_is_connection_dropped );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_is_connection_dropped, tmp_assign_source_6 );
    tmp_name_name_2 = const_str_plain_request;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_make_headers_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_333fff1b05d3e0713bdda1a9608101ae->m_frame.f_lineno = 4;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_3 ) )
    {
       tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_make_headers,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_make_headers );
    }

    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_make_headers, tmp_assign_source_7 );
    tmp_name_name_3 = const_str_plain_response;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_is_fp_closed_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_333fff1b05d3e0713bdda1a9608101ae->m_frame.f_lineno = 5;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_4 ) )
    {
       tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_4,
            (PyObject *)MODULE_DICT(tmp_import_name_from_4),
            const_str_plain_is_fp_closed,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_is_fp_closed );
    }

    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_is_fp_closed, tmp_assign_source_8 );
    tmp_name_name_4 = const_str_plain_ssl_;
    tmp_globals_name_4 = (PyObject *)moduledict_urllib3$util;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_49344022abd0df42d598d0e15205f3da_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_333fff1b05d3e0713bdda1a9608101ae->m_frame.f_lineno = 6;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_9;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    if ( PyModule_Check( tmp_import_name_from_5 ) )
    {
       tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_5,
            (PyObject *)MODULE_DICT(tmp_import_name_from_5),
            const_str_plain_SSLContext,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_SSLContext );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_10 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    if ( PyModule_Check( tmp_import_name_from_6 ) )
    {
       tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_6,
            (PyObject *)MODULE_DICT(tmp_import_name_from_6),
            const_str_plain_HAS_SNI,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_HAS_SNI );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_HAS_SNI, tmp_assign_source_11 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    if ( PyModule_Check( tmp_import_name_from_7 ) )
    {
       tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_7,
            (PyObject *)MODULE_DICT(tmp_import_name_from_7),
            const_str_plain_IS_PYOPENSSL,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_IS_PYOPENSSL );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_IS_PYOPENSSL, tmp_assign_source_12 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    if ( PyModule_Check( tmp_import_name_from_8 ) )
    {
       tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_8,
            (PyObject *)MODULE_DICT(tmp_import_name_from_8),
            const_str_plain_IS_SECURETRANSPORT,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_IS_SECURETRANSPORT );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_IS_SECURETRANSPORT, tmp_assign_source_13 );
    tmp_import_name_from_9 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    if ( PyModule_Check( tmp_import_name_from_9 ) )
    {
       tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_9,
            (PyObject *)MODULE_DICT(tmp_import_name_from_9),
            const_str_plain_assert_fingerprint,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_assert_fingerprint );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_assert_fingerprint, tmp_assign_source_14 );
    tmp_import_name_from_10 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    if ( PyModule_Check( tmp_import_name_from_10 ) )
    {
       tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_10,
            (PyObject *)MODULE_DICT(tmp_import_name_from_10),
            const_str_plain_resolve_cert_reqs,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_resolve_cert_reqs );
    }

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs, tmp_assign_source_15 );
    tmp_import_name_from_11 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    if ( PyModule_Check( tmp_import_name_from_11 ) )
    {
       tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_11,
            (PyObject *)MODULE_DICT(tmp_import_name_from_11),
            const_str_plain_resolve_ssl_version,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_resolve_ssl_version );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version, tmp_assign_source_16 );
    tmp_import_name_from_12 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    if ( PyModule_Check( tmp_import_name_from_12 ) )
    {
       tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_12,
            (PyObject *)MODULE_DICT(tmp_import_name_from_12),
            const_str_plain_ssl_wrap_socket,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_ssl_wrap_socket );
    }

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket, tmp_assign_source_17 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_name_name_5 = const_str_plain_timeout;
    tmp_globals_name_5 = (PyObject *)moduledict_urllib3$util;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_current_time_str_plain_Timeout_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_333fff1b05d3e0713bdda1a9608101ae->m_frame.f_lineno = 16;
    tmp_assign_source_18 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_18;

    // Tried code:
    tmp_import_name_from_13 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    if ( PyModule_Check( tmp_import_name_from_13 ) )
    {
       tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_13,
            (PyObject *)MODULE_DICT(tmp_import_name_from_13),
            const_str_plain_current_time,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_current_time );
    }

    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_current_time, tmp_assign_source_19 );
    tmp_import_name_from_14 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    if ( PyModule_Check( tmp_import_name_from_14 ) )
    {
       tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_14,
            (PyObject *)MODULE_DICT(tmp_import_name_from_14),
            const_str_plain_Timeout,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_Timeout );
    }

    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_Timeout, tmp_assign_source_20 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_name_name_6 = const_str_plain_retry;
    tmp_globals_name_6 = (PyObject *)moduledict_urllib3$util;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_Retry_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_333fff1b05d3e0713bdda1a9608101ae->m_frame.f_lineno = 21;
    tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_15 ) )
    {
       tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_15,
            (PyObject *)MODULE_DICT(tmp_import_name_from_15),
            const_str_plain_Retry,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_Retry );
    }

    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_21 );
    tmp_name_name_7 = const_str_plain_url;
    tmp_globals_name_7 = (PyObject *)moduledict_urllib3$util;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_a8f4bf95f064877135b9f41c797b793b_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_333fff1b05d3e0713bdda1a9608101ae->m_frame.f_lineno = 22;
    tmp_assign_source_22 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_22;

    // Tried code:
    tmp_import_name_from_16 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    if ( PyModule_Check( tmp_import_name_from_16 ) )
    {
       tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_16,
            (PyObject *)MODULE_DICT(tmp_import_name_from_16),
            const_str_plain_get_host,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_get_host );
    }

    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_get_host, tmp_assign_source_23 );
    tmp_import_name_from_17 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    if ( PyModule_Check( tmp_import_name_from_17 ) )
    {
       tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_17,
            (PyObject *)MODULE_DICT(tmp_import_name_from_17),
            const_str_plain_parse_url,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_parse_url );
    }

    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_parse_url, tmp_assign_source_24 );
    tmp_import_name_from_18 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    if ( PyModule_Check( tmp_import_name_from_18 ) )
    {
       tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_18,
            (PyObject *)MODULE_DICT(tmp_import_name_from_18),
            const_str_plain_split_first,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_split_first );
    }

    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_split_first, tmp_assign_source_25 );
    tmp_import_name_from_19 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    if ( PyModule_Check( tmp_import_name_from_19 ) )
    {
       tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_19,
            (PyObject *)MODULE_DICT(tmp_import_name_from_19),
            const_str_plain_Url,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_Url );
    }

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_Url, tmp_assign_source_26 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_name_name_8 = const_str_plain_wait;
    tmp_globals_name_8 = (PyObject *)moduledict_urllib3$util;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_wait_for_read_str_plain_wait_for_write_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_333fff1b05d3e0713bdda1a9608101ae->m_frame.f_lineno = 28;
    tmp_assign_source_27 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_27;

    // Tried code:
    tmp_import_name_from_20 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    if ( PyModule_Check( tmp_import_name_from_20 ) )
    {
       tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_20,
            (PyObject *)MODULE_DICT(tmp_import_name_from_20),
            const_str_plain_wait_for_read,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_wait_for_read );
    }

    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_wait_for_read, tmp_assign_source_28 );
    tmp_import_name_from_21 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    if ( PyModule_Check( tmp_import_name_from_21 ) )
    {
       tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_21,
            (PyObject *)MODULE_DICT(tmp_import_name_from_21),
            const_str_plain_wait_for_write,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_wait_for_write );
    }

    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain_wait_for_write, tmp_assign_source_29 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_333fff1b05d3e0713bdda1a9608101ae );
#endif
    popFrameStack();

    assertFrameObject( frame_333fff1b05d3e0713bdda1a9608101ae );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_333fff1b05d3e0713bdda1a9608101ae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_333fff1b05d3e0713bdda1a9608101ae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_333fff1b05d3e0713bdda1a9608101ae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_333fff1b05d3e0713bdda1a9608101ae, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    tmp_assign_source_30 = const_tuple_d9f55eb6f47613ec7fa8c938d9d722ac_tuple;
    UPDATE_STRING_DICT0( moduledict_urllib3$util, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_30 );

    return MOD_RETURN_VALUE( module_urllib3$util );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
