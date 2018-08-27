/* Generated code for Python source for module 'chardet.langturkishmodel'
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

/* The _module_chardet$langturkishmodel is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$langturkishmodel;
PyDictObject *moduledict_chardet$langturkishmodel;

/* The module constants used, if any. */
static PyObject *const_tuple_f2c470729e0f10e437bc567e306ce1de_tuple;
extern PyObject *const_str_plain_precedence_matrix;
extern PyObject *const_str_plain_charset_name;
extern PyObject *const_str_plain_keep_english_letter;
static PyObject *const_str_digest_112f350911f9fd7bd1948febc53fd26f;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_language;
static PyObject *const_str_plain_Turkish;
extern PyObject *const_str_plain_Latin5TurkishModel;
extern PyObject *const_str_plain_char_to_order_map;
static PyObject *const_str_plain_Latin5_TurkishCharToOrderMap;
static PyObject *const_str_plain_TurkishLangModel;
static PyObject *const_tuple_439339857850830237fd4916bd45a217_tuple;
static PyObject *const_str_digest_505db4dfed8ce57136b6a88fb660a1e2;
static PyObject *const_float_0_97029;
static PyObject *const_str_digest_e73b1cdb9cf9c90921f39f6162acd4c1;
extern PyObject *const_str_plain_typical_positive_ratio;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_f2c470729e0f10e437bc567e306ce1de_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 336983 ], 1285 );
    const_str_digest_112f350911f9fd7bd1948febc53fd26f = UNSTREAM_STRING( &constant_bin[ 338268 ], 68, 0 );
    const_str_plain_Turkish = UNSTREAM_STRING( &constant_bin[ 338336 ], 7, 1 );
    const_str_plain_Latin5_TurkishCharToOrderMap = UNSTREAM_STRING( &constant_bin[ 338343 ], 28, 1 );
    const_str_plain_TurkishLangModel = UNSTREAM_STRING( &constant_bin[ 338371 ], 16, 1 );
    const_tuple_439339857850830237fd4916bd45a217_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 338387 ], 20485 );
    const_str_digest_505db4dfed8ce57136b6a88fb660a1e2 = UNSTREAM_STRING( &constant_bin[ 358872 ], 24, 0 );
    const_float_0_97029 = UNSTREAM_FLOAT( &constant_bin[ 358896 ] );
    const_str_digest_e73b1cdb9cf9c90921f39f6162acd4c1 = UNSTREAM_STRING( &constant_bin[ 358904 ], 10, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$langturkishmodel( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.


static void createModuleCodeObjects(void)
{

}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$langturkishmodel =
{
    PyModuleDef_HEAD_INIT,
    "chardet.langturkishmodel",   /* m_name */
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

MOD_INIT_DECL( chardet$langturkishmodel )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$langturkishmodel );
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
    puts("chardet.langturkishmodel: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.langturkishmodel: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.langturkishmodel: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$langturkishmodel" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$langturkishmodel = Py_InitModule4(
        "chardet.langturkishmodel",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_chardet$langturkishmodel = PyModule_Create( &mdef_chardet$langturkishmodel );
#endif

    moduledict_chardet$langturkishmodel = MODULE_DICT( module_chardet$langturkishmodel );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_chardet$langturkishmodel,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$langturkishmodel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$langturkishmodel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_chardet$langturkishmodel );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_505db4dfed8ce57136b6a88fb660a1e2, module_chardet$langturkishmodel );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    int tmp_res;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_112f350911f9fd7bd1948febc53fd26f;
    UPDATE_STRING_DICT0( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_tuple_f2c470729e0f10e437bc567e306ce1de_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain_Latin5_TurkishCharToOrderMap, tmp_assign_source_4 );
    tmp_assign_source_5 = const_tuple_439339857850830237fd4916bd45a217_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain_TurkishLangModel, tmp_assign_source_5 );
    tmp_dict_key_1 = const_str_plain_char_to_order_map;
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain_Latin5_TurkishCharToOrderMap );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin5_TurkishCharToOrderMap );
    }

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_assign_source_6 = _PyDict_NewPresized( 6 );
    tmp_res = PyDict_SetItem( tmp_assign_source_6, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_precedence_matrix;
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain_TurkishLangModel );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TurkishLangModel );
    }

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_res = PyDict_SetItem( tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_typical_positive_ratio;
    tmp_dict_value_3 = const_float_0_97029;
    tmp_res = PyDict_SetItem( tmp_assign_source_6, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_keep_english_letter;
    tmp_dict_value_4 = Py_True;
    tmp_res = PyDict_SetItem( tmp_assign_source_6, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_charset_name;
    tmp_dict_value_5 = const_str_digest_e73b1cdb9cf9c90921f39f6162acd4c1;
    tmp_res = PyDict_SetItem( tmp_assign_source_6, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_language;
    tmp_dict_value_6 = const_str_plain_Turkish;
    tmp_res = PyDict_SetItem( tmp_assign_source_6, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    UPDATE_STRING_DICT1( moduledict_chardet$langturkishmodel, (Nuitka_StringObject *)const_str_plain_Latin5TurkishModel, tmp_assign_source_6 );

    return MOD_RETURN_VALUE( module_chardet$langturkishmodel );
}
