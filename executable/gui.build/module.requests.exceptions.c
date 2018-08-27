/* Generated code for Python source for module 'requests.exceptions'
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

/* The _module_requests$exceptions is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$exceptions;
PyDictObject *moduledict_requests$exceptions;

/* The module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain_Warning;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0;
extern PyObject *const_str_plain_URLRequired;
extern PyObject *const_str_plain_ConnectTimeout;
static PyObject *const_str_digest_225332b778bf59fe5fff32593da4030a;
static PyObject *const_tuple_str_plain_request_none_tuple;
static PyObject *const_str_digest_4aae44da769befc767278be58ddca255;
static PyObject *const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple;
extern PyObject *const_str_plain_InvalidURL;
extern PyObject *const_str_plain_MissingSchema;
static PyObject *const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
static PyObject *const_str_digest_2ad78bd49ece92478753ce0fc79a6e93;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_ReadTimeout;
static PyObject *const_str_digest_b8f960a38723097fb701d7986528073c;
extern PyObject *const_str_digest_c8562bbff9d721153deb2fdd066393d0;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_plain_BaseHTTPError;
extern PyObject *const_str_plain_InvalidProxyURL;
extern PyObject *const_str_plain_StreamConsumedError;
static PyObject *const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_c7a80113e8376f2f52f7ee120f1360d2;
extern PyObject *const_str_plain_DeprecationWarning;
static PyObject *const_str_digest_b3f79f0ff88ef53ddf2012488144e436;
extern PyObject *const_str_plain_ChunkedEncodingError;
extern PyObject *const_str_plain_ProxyError;
static PyObject *const_str_digest_3aedd4c9c88f311ca62d0cad34678af2;
static PyObject *const_str_digest_4118411709fd101091089b386ddd8f9f;
static PyObject *const_str_digest_cb488f69655ce887e5155c9a2e164928;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_RequestsWarning;
extern PyObject *const_str_plain_ContentDecodingError;
static PyObject *const_str_digest_3b2add8be5d440c36ae0b41135415fa9;
static PyObject *const_str_digest_382efa1ab11fb4a35860fc2596b633ab;
static PyObject *const_str_digest_0689849403be684eb33eb3512cfc2389;
static PyObject *const_tuple_type_OSError_tuple;
extern PyObject *const_str_plain_UnrewindableBodyError;
extern PyObject *const_tuple_str_plain_HTTPError_tuple;
extern PyObject *const_str_plain_pop;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain_Timeout;
extern PyObject *const_str_plain_HTTPError;
extern PyObject *const_str_plain_InvalidSchema;
static PyObject *const_str_digest_841f485de6d4157389a41ea63dc14155;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_InvalidHeader;
extern PyObject *const_str_plain_ConnectionError;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_b2c98825348c9fcd71a85ac1bfc67cf8;
extern PyObject *const_str_plain_FileModeWarning;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_231982acca444de8f23c0288db53eaef;
extern PyObject *const_str_digest_c1f4dcdf3195a093500cff5b8859ecc9;
static PyObject *const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc;
extern PyObject *const_str_plain_RequestsDependencyWarning;
static PyObject *const_str_digest_3a035decbb1d48c6b204b28e42512076;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8;
static PyObject *const_tuple_str_plain_response_none_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_RetryError;
static PyObject *const_str_digest_183e1365483754a66afafc5046591b5f;
static PyObject *const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e;
static PyObject *const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2;
static PyObject *const_str_digest_e91f0a06d295e9fdd4c3972666eefa40;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a;
static PyObject *const_str_digest_34a451307fc6aab1649478fed3307568;
extern PyObject *const_str_plain_RequestException;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_str_plain_TooManyRedirects;
static PyObject *const_str_digest_35d6e09b700b272e1f4429814168031d;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0 = UNSTREAM_STRING( &constant_bin[ 804620 ], 28, 0 );
    const_str_digest_225332b778bf59fe5fff32593da4030a = UNSTREAM_STRING( &constant_bin[ 804648 ], 37, 0 );
    const_tuple_str_plain_request_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_request_none_tuple, 0, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_str_plain_request_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_4aae44da769befc767278be58ddca255 = UNSTREAM_STRING( &constant_bin[ 804685 ], 46, 0 );
    const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 3, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 4, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2 = UNSTREAM_STRING( &constant_bin[ 804731 ], 19, 0 );
    const_str_digest_2ad78bd49ece92478753ce0fc79a6e93 = UNSTREAM_STRING( &constant_bin[ 804750 ], 84, 0 );
    const_str_digest_b8f960a38723097fb701d7986528073c = UNSTREAM_STRING( &constant_bin[ 804834 ], 64, 0 );
    const_str_plain_BaseHTTPError = UNSTREAM_STRING( &constant_bin[ 804898 ], 13, 1 );
    const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8 = UNSTREAM_STRING( &constant_bin[ 804911 ], 25, 0 );
    const_str_digest_c7a80113e8376f2f52f7ee120f1360d2 = UNSTREAM_STRING( &constant_bin[ 804936 ], 47, 0 );
    const_str_digest_b3f79f0ff88ef53ddf2012488144e436 = UNSTREAM_STRING( &constant_bin[ 804983 ], 27, 0 );
    const_str_digest_3aedd4c9c88f311ca62d0cad34678af2 = UNSTREAM_STRING( &constant_bin[ 805010 ], 23, 0 );
    const_str_digest_4118411709fd101091089b386ddd8f9f = UNSTREAM_STRING( &constant_bin[ 805033 ], 63, 0 );
    const_str_digest_cb488f69655ce887e5155c9a2e164928 = UNSTREAM_STRING( &constant_bin[ 805096 ], 66, 0 );
    const_str_plain_RequestsWarning = UNSTREAM_STRING( &constant_bin[ 805162 ], 15, 1 );
    const_str_digest_3b2add8be5d440c36ae0b41135415fa9 = UNSTREAM_STRING( &constant_bin[ 805177 ], 34, 0 );
    const_str_digest_382efa1ab11fb4a35860fc2596b633ab = UNSTREAM_STRING( &constant_bin[ 805211 ], 58, 0 );
    const_str_digest_0689849403be684eb33eb3512cfc2389 = UNSTREAM_STRING( &constant_bin[ 805269 ], 34, 0 );
    const_tuple_type_OSError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_type_OSError_tuple, 0, (PyObject *)PyExc_OSError ); Py_INCREF( (PyObject *)PyExc_OSError );
    const_str_digest_841f485de6d4157389a41ea63dc14155 = UNSTREAM_STRING( &constant_bin[ 805303 ], 42, 0 );
    const_str_digest_b2c98825348c9fcd71a85ac1bfc67cf8 = UNSTREAM_STRING( &constant_bin[ 805345 ], 96, 0 );
    const_str_digest_231982acca444de8f23c0288db53eaef = UNSTREAM_STRING( &constant_bin[ 805441 ], 26, 0 );
    const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc = UNSTREAM_STRING( &constant_bin[ 805467 ], 23, 0 );
    const_str_digest_3a035decbb1d48c6b204b28e42512076 = UNSTREAM_STRING( &constant_bin[ 805490 ], 64, 0 );
    const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8 = UNSTREAM_STRING( &constant_bin[ 805554 ], 130, 0 );
    const_tuple_str_plain_response_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_response_none_tuple, 0, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_str_plain_response_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_183e1365483754a66afafc5046591b5f = UNSTREAM_STRING( &constant_bin[ 805684 ], 28, 0 );
    const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e = UNSTREAM_STRING( &constant_bin[ 805712 ], 19, 0 );
    const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2 = UNSTREAM_STRING( &constant_bin[ 805731 ], 74, 0 );
    const_str_digest_e91f0a06d295e9fdd4c3972666eefa40 = UNSTREAM_STRING( &constant_bin[ 805805 ], 33, 0 );
    const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a = UNSTREAM_STRING( &constant_bin[ 805838 ], 63, 0 );
    const_str_digest_34a451307fc6aab1649478fed3307568 = UNSTREAM_STRING( &constant_bin[ 805901 ], 171, 0 );
    const_str_digest_35d6e09b700b272e1f4429814168031d = UNSTREAM_STRING( &constant_bin[ 806072 ], 22, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$exceptions( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_31a02c8d82d89f6e34595f6e8506edd1;
static PyCodeObject *codeobj_580cbbecbbb7936998cb8a8258a1c861;
static PyCodeObject *codeobj_d0c49acf2545df932b929c5abc470160;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_4118411709fd101091089b386ddd8f9f;
    codeobj_31a02c8d82d89f6e34595f6e8506edd1 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_183e1365483754a66afafc5046591b5f, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_580cbbecbbb7936998cb8a8258a1c861 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RequestException, 12, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_d0c49acf2545df932b929c5abc470160 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 17, const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$exceptions$$$function_1___init__(  );


// The module function definitions.
static PyObject *impl_requests$exceptions$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_response = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    PyObject *tmp_object_name_1;
    PyObject *tmp_operand_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d0c49acf2545df932b929c5abc470160 = NULL;

    struct Nuitka_FrameObject *frame_d0c49acf2545df932b929c5abc470160;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d0c49acf2545df932b929c5abc470160, codeobj_d0c49acf2545df932b929c5abc470160, module_requests$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d0c49acf2545df932b929c5abc470160 = cache_frame_d0c49acf2545df932b929c5abc470160;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d0c49acf2545df932b929c5abc470160 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d0c49acf2545df932b929c5abc470160 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_d0c49acf2545df932b929c5abc470160->m_frame.f_lineno = 19;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_response_none_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    assert( var_response == NULL );
    var_response = tmp_assign_source_1;

    tmp_assattr_name_1 = var_response;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_response, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = par_kwargs;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    frame_d0c49acf2545df932b929c5abc470160->m_frame.f_lineno = 21;
    tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_request_none_tuple, 0 ) );

    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_request, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = var_response;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_hasattr_value_1 = var_response;

    if ( tmp_hasattr_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_request;
    tmp_and_right_value_2 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_response );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_request );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_request, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    if ( tmp_object_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_args;

    if ( tmp_dircall_arg2_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_1 = par_kwargs;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl___internal__$$$function_7_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0c49acf2545df932b929c5abc470160 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0c49acf2545df932b929c5abc470160 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d0c49acf2545df932b929c5abc470160, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d0c49acf2545df932b929c5abc470160->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d0c49acf2545df932b929c5abc470160, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d0c49acf2545df932b929c5abc470160,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        var_response,
        NULL
    );


    // Release cached frame.
    if ( frame_d0c49acf2545df932b929c5abc470160 == cache_frame_d0c49acf2545df932b929c5abc470160 )
    {
        Py_DECREF( frame_d0c49acf2545df932b929c5abc470160 );
    }
    cache_frame_d0c49acf2545df932b929c5abc470160 = NULL;

    assertFrameObject( frame_d0c49acf2545df932b929c5abc470160 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    goto function_return_exit;
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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions$$$function_1___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_requests$exceptions$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$exceptions$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8,
#endif
        codeobj_d0c49acf2545df932b929c5abc470160,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$exceptions,
        const_str_digest_cb488f69655ce887e5155c9a2e164928,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$exceptions =
{
    PyModuleDef_HEAD_INIT,
    "requests.exceptions",   /* m_name */
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

MOD_INIT_DECL( requests$exceptions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$exceptions );
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
    puts("requests.exceptions: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.exceptions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.exceptions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$exceptions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$exceptions = Py_InitModule4(
        "requests.exceptions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_requests$exceptions = PyModule_Create( &mdef_requests$exceptions );
#endif

    moduledict_requests$exceptions = MODULE_DICT( module_requests$exceptions );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_requests$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_requests$exceptions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2, module_requests$exceptions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_19_var___class__ = NULL;
    PyObject *outline_20_var___class__ = NULL;
    PyObject *outline_21_var___class__ = NULL;
    PyObject *outline_22_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__bases_orig = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__bases_orig = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__bases_orig = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__bases_orig = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__bases_orig = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__bases_orig = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__bases_orig = NULL;
    PyObject *tmp_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_18__prepared = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__bases_orig = NULL;
    PyObject *tmp_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_19__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__bases_orig = NULL;
    PyObject *tmp_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_20__prepared = NULL;
    PyObject *tmp_class_creation_21__bases = NULL;
    PyObject *tmp_class_creation_21__bases_orig = NULL;
    PyObject *tmp_class_creation_21__class_decl_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_21__prepared = NULL;
    PyObject *tmp_class_creation_22__bases = NULL;
    PyObject *tmp_class_creation_22__bases_orig = NULL;
    PyObject *tmp_class_creation_22__class_decl_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_22__prepared = NULL;
    PyObject *tmp_class_creation_23__bases = NULL;
    PyObject *tmp_class_creation_23__bases_orig = NULL;
    PyObject *tmp_class_creation_23__class_decl_dict = NULL;
    PyObject *tmp_class_creation_23__metaclass = NULL;
    PyObject *tmp_class_creation_23__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
    PyObject *exception_keeper_type_69;
    PyObject *exception_keeper_value_69;
    PyTracebackObject *exception_keeper_tb_69;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
    PyObject *tmp_args_name_9;
    PyObject *tmp_args_name_10;
    PyObject *tmp_args_name_11;
    PyObject *tmp_args_name_12;
    PyObject *tmp_args_name_13;
    PyObject *tmp_args_name_14;
    PyObject *tmp_args_name_15;
    PyObject *tmp_args_name_16;
    PyObject *tmp_args_name_17;
    PyObject *tmp_args_name_18;
    PyObject *tmp_args_name_19;
    PyObject *tmp_args_name_20;
    PyObject *tmp_args_name_21;
    PyObject *tmp_args_name_22;
    PyObject *tmp_args_name_23;
    PyObject *tmp_args_name_24;
    PyObject *tmp_args_name_25;
    PyObject *tmp_args_name_26;
    PyObject *tmp_args_name_27;
    PyObject *tmp_args_name_28;
    PyObject *tmp_args_name_29;
    PyObject *tmp_args_name_30;
    PyObject *tmp_args_name_31;
    PyObject *tmp_args_name_32;
    PyObject *tmp_args_name_33;
    PyObject *tmp_args_name_34;
    PyObject *tmp_args_name_35;
    PyObject *tmp_args_name_36;
    PyObject *tmp_args_name_37;
    PyObject *tmp_args_name_38;
    PyObject *tmp_args_name_39;
    PyObject *tmp_args_name_40;
    PyObject *tmp_args_name_41;
    PyObject *tmp_args_name_42;
    PyObject *tmp_args_name_43;
    PyObject *tmp_args_name_44;
    PyObject *tmp_args_name_45;
    PyObject *tmp_args_name_46;
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
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
    PyObject *tmp_assign_source_107;
    PyObject *tmp_assign_source_108;
    PyObject *tmp_assign_source_109;
    PyObject *tmp_assign_source_110;
    PyObject *tmp_assign_source_111;
    PyObject *tmp_assign_source_112;
    PyObject *tmp_assign_source_113;
    PyObject *tmp_assign_source_114;
    PyObject *tmp_assign_source_115;
    PyObject *tmp_assign_source_116;
    PyObject *tmp_assign_source_117;
    PyObject *tmp_assign_source_118;
    PyObject *tmp_assign_source_119;
    PyObject *tmp_assign_source_120;
    PyObject *tmp_assign_source_121;
    PyObject *tmp_assign_source_122;
    PyObject *tmp_assign_source_123;
    PyObject *tmp_assign_source_124;
    PyObject *tmp_assign_source_125;
    PyObject *tmp_assign_source_126;
    PyObject *tmp_assign_source_127;
    PyObject *tmp_assign_source_128;
    PyObject *tmp_assign_source_129;
    PyObject *tmp_assign_source_130;
    PyObject *tmp_assign_source_131;
    PyObject *tmp_assign_source_132;
    PyObject *tmp_assign_source_133;
    PyObject *tmp_assign_source_134;
    PyObject *tmp_assign_source_135;
    PyObject *tmp_assign_source_136;
    PyObject *tmp_assign_source_137;
    PyObject *tmp_assign_source_138;
    PyObject *tmp_assign_source_139;
    PyObject *tmp_assign_source_140;
    PyObject *tmp_assign_source_141;
    PyObject *tmp_assign_source_142;
    PyObject *tmp_assign_source_143;
    PyObject *tmp_assign_source_144;
    PyObject *tmp_assign_source_145;
    PyObject *tmp_assign_source_146;
    PyObject *tmp_assign_source_147;
    PyObject *tmp_assign_source_148;
    PyObject *tmp_assign_source_149;
    PyObject *tmp_assign_source_150;
    PyObject *tmp_assign_source_151;
    PyObject *tmp_assign_source_152;
    PyObject *tmp_assign_source_153;
    PyObject *tmp_assign_source_154;
    PyObject *tmp_assign_source_155;
    PyObject *tmp_assign_source_156;
    PyObject *tmp_assign_source_157;
    PyObject *tmp_assign_source_158;
    PyObject *tmp_assign_source_159;
    PyObject *tmp_assign_source_160;
    PyObject *tmp_assign_source_161;
    PyObject *tmp_assign_source_162;
    PyObject *tmp_assign_source_163;
    PyObject *tmp_assign_source_164;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_bases_name_6;
    PyObject *tmp_bases_name_7;
    PyObject *tmp_bases_name_8;
    PyObject *tmp_bases_name_9;
    PyObject *tmp_bases_name_10;
    PyObject *tmp_bases_name_11;
    PyObject *tmp_bases_name_12;
    PyObject *tmp_bases_name_13;
    PyObject *tmp_bases_name_14;
    PyObject *tmp_bases_name_15;
    PyObject *tmp_bases_name_16;
    PyObject *tmp_bases_name_17;
    PyObject *tmp_bases_name_18;
    PyObject *tmp_bases_name_19;
    PyObject *tmp_bases_name_20;
    PyObject *tmp_bases_name_21;
    PyObject *tmp_bases_name_22;
    PyObject *tmp_bases_name_23;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    PyObject *tmp_called_name_35;
    PyObject *tmp_called_name_36;
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    PyObject *tmp_called_name_43;
    PyObject *tmp_called_name_44;
    PyObject *tmp_called_name_45;
    PyObject *tmp_called_name_46;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotEq_3;
    int tmp_cmp_NotEq_4;
    int tmp_cmp_NotEq_5;
    int tmp_cmp_NotEq_6;
    int tmp_cmp_NotEq_7;
    int tmp_cmp_NotEq_8;
    int tmp_cmp_NotEq_9;
    int tmp_cmp_NotEq_10;
    int tmp_cmp_NotEq_11;
    int tmp_cmp_NotEq_12;
    int tmp_cmp_NotEq_13;
    int tmp_cmp_NotEq_14;
    int tmp_cmp_NotEq_15;
    int tmp_cmp_NotEq_16;
    int tmp_cmp_NotEq_17;
    int tmp_cmp_NotEq_18;
    int tmp_cmp_NotEq_19;
    int tmp_cmp_NotEq_20;
    int tmp_cmp_NotEq_21;
    int tmp_cmp_NotEq_22;
    int tmp_cmp_NotEq_23;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_left_19;
    PyObject *tmp_compare_left_20;
    PyObject *tmp_compare_left_21;
    PyObject *tmp_compare_left_22;
    PyObject *tmp_compare_left_23;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    PyObject *tmp_compare_right_19;
    PyObject *tmp_compare_right_20;
    PyObject *tmp_compare_right_21;
    PyObject *tmp_compare_right_22;
    PyObject *tmp_compare_right_23;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    int tmp_cond_truth_18;
    int tmp_cond_truth_19;
    int tmp_cond_truth_20;
    int tmp_cond_truth_21;
    int tmp_cond_truth_22;
    int tmp_cond_truth_23;
    int tmp_cond_truth_24;
    int tmp_cond_truth_25;
    int tmp_cond_truth_26;
    int tmp_cond_truth_27;
    int tmp_cond_truth_28;
    int tmp_cond_truth_29;
    int tmp_cond_truth_30;
    int tmp_cond_truth_31;
    int tmp_cond_truth_32;
    int tmp_cond_truth_33;
    int tmp_cond_truth_34;
    int tmp_cond_truth_35;
    int tmp_cond_truth_36;
    int tmp_cond_truth_37;
    int tmp_cond_truth_38;
    int tmp_cond_truth_39;
    int tmp_cond_truth_40;
    int tmp_cond_truth_41;
    int tmp_cond_truth_42;
    int tmp_cond_truth_43;
    int tmp_cond_truth_44;
    int tmp_cond_truth_45;
    int tmp_cond_truth_46;
    int tmp_cond_truth_47;
    int tmp_cond_truth_48;
    int tmp_cond_truth_49;
    int tmp_cond_truth_50;
    int tmp_cond_truth_51;
    int tmp_cond_truth_52;
    int tmp_cond_truth_53;
    int tmp_cond_truth_54;
    int tmp_cond_truth_55;
    int tmp_cond_truth_56;
    int tmp_cond_truth_57;
    int tmp_cond_truth_58;
    int tmp_cond_truth_59;
    int tmp_cond_truth_60;
    int tmp_cond_truth_61;
    int tmp_cond_truth_62;
    int tmp_cond_truth_63;
    int tmp_cond_truth_64;
    int tmp_cond_truth_65;
    int tmp_cond_truth_66;
    int tmp_cond_truth_67;
    int tmp_cond_truth_68;
    int tmp_cond_truth_69;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_cond_value_18;
    PyObject *tmp_cond_value_19;
    PyObject *tmp_cond_value_20;
    PyObject *tmp_cond_value_21;
    PyObject *tmp_cond_value_22;
    PyObject *tmp_cond_value_23;
    PyObject *tmp_cond_value_24;
    PyObject *tmp_cond_value_25;
    PyObject *tmp_cond_value_26;
    PyObject *tmp_cond_value_27;
    PyObject *tmp_cond_value_28;
    PyObject *tmp_cond_value_29;
    PyObject *tmp_cond_value_30;
    PyObject *tmp_cond_value_31;
    PyObject *tmp_cond_value_32;
    PyObject *tmp_cond_value_33;
    PyObject *tmp_cond_value_34;
    PyObject *tmp_cond_value_35;
    PyObject *tmp_cond_value_36;
    PyObject *tmp_cond_value_37;
    PyObject *tmp_cond_value_38;
    PyObject *tmp_cond_value_39;
    PyObject *tmp_cond_value_40;
    PyObject *tmp_cond_value_41;
    PyObject *tmp_cond_value_42;
    PyObject *tmp_cond_value_43;
    PyObject *tmp_cond_value_44;
    PyObject *tmp_cond_value_45;
    PyObject *tmp_cond_value_46;
    PyObject *tmp_cond_value_47;
    PyObject *tmp_cond_value_48;
    PyObject *tmp_cond_value_49;
    PyObject *tmp_cond_value_50;
    PyObject *tmp_cond_value_51;
    PyObject *tmp_cond_value_52;
    PyObject *tmp_cond_value_53;
    PyObject *tmp_cond_value_54;
    PyObject *tmp_cond_value_55;
    PyObject *tmp_cond_value_56;
    PyObject *tmp_cond_value_57;
    PyObject *tmp_cond_value_58;
    PyObject *tmp_cond_value_59;
    PyObject *tmp_cond_value_60;
    PyObject *tmp_cond_value_61;
    PyObject *tmp_cond_value_62;
    PyObject *tmp_cond_value_63;
    PyObject *tmp_cond_value_64;
    PyObject *tmp_cond_value_65;
    PyObject *tmp_cond_value_66;
    PyObject *tmp_cond_value_67;
    PyObject *tmp_cond_value_68;
    PyObject *tmp_cond_value_69;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_name_8;
    PyObject *tmp_dict_name_9;
    PyObject *tmp_dict_name_10;
    PyObject *tmp_dict_name_11;
    PyObject *tmp_dict_name_12;
    PyObject *tmp_dict_name_13;
    PyObject *tmp_dict_name_14;
    PyObject *tmp_dict_name_15;
    PyObject *tmp_dict_name_16;
    PyObject *tmp_dict_name_17;
    PyObject *tmp_dict_name_18;
    PyObject *tmp_dict_name_19;
    PyObject *tmp_dict_name_20;
    PyObject *tmp_dict_name_21;
    PyObject *tmp_dict_name_22;
    PyObject *tmp_dict_name_23;
    PyObject *tmp_dict_name_24;
    PyObject *tmp_dict_name_25;
    PyObject *tmp_dict_name_26;
    PyObject *tmp_dict_name_27;
    PyObject *tmp_dict_name_28;
    PyObject *tmp_dict_name_29;
    PyObject *tmp_dict_name_30;
    PyObject *tmp_dict_name_31;
    PyObject *tmp_dict_name_32;
    PyObject *tmp_dict_name_33;
    PyObject *tmp_dict_name_34;
    PyObject *tmp_dict_name_35;
    PyObject *tmp_dict_name_36;
    PyObject *tmp_dict_name_37;
    PyObject *tmp_dict_name_38;
    PyObject *tmp_dict_name_39;
    PyObject *tmp_dict_name_40;
    PyObject *tmp_dict_name_41;
    PyObject *tmp_dict_name_42;
    PyObject *tmp_dict_name_43;
    PyObject *tmp_dict_name_44;
    PyObject *tmp_dict_name_45;
    PyObject *tmp_dict_name_46;
    PyObject *tmp_dict_name_47;
    PyObject *tmp_dict_name_48;
    PyObject *tmp_dict_name_49;
    PyObject *tmp_dict_name_50;
    PyObject *tmp_dict_name_51;
    PyObject *tmp_dict_name_52;
    PyObject *tmp_dict_name_53;
    PyObject *tmp_dict_name_54;
    PyObject *tmp_dict_name_55;
    PyObject *tmp_dict_name_56;
    PyObject *tmp_dict_name_57;
    PyObject *tmp_dict_name_58;
    PyObject *tmp_dict_name_59;
    PyObject *tmp_dict_name_60;
    PyObject *tmp_dict_name_61;
    PyObject *tmp_dict_name_62;
    PyObject *tmp_dict_name_63;
    PyObject *tmp_dict_name_64;
    PyObject *tmp_dict_name_65;
    PyObject *tmp_dict_name_66;
    PyObject *tmp_dict_name_67;
    PyObject *tmp_dict_name_68;
    PyObject *tmp_dict_name_69;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg1_3;
    PyObject *tmp_dircall_arg1_4;
    PyObject *tmp_dircall_arg1_5;
    PyObject *tmp_dircall_arg1_6;
    PyObject *tmp_dircall_arg1_7;
    PyObject *tmp_dircall_arg1_8;
    PyObject *tmp_dircall_arg1_9;
    PyObject *tmp_dircall_arg1_10;
    PyObject *tmp_dircall_arg1_11;
    PyObject *tmp_dircall_arg1_12;
    PyObject *tmp_dircall_arg1_13;
    PyObject *tmp_dircall_arg1_14;
    PyObject *tmp_dircall_arg1_15;
    PyObject *tmp_dircall_arg1_16;
    PyObject *tmp_dircall_arg1_17;
    PyObject *tmp_dircall_arg1_18;
    PyObject *tmp_dircall_arg1_19;
    PyObject *tmp_dircall_arg1_20;
    PyObject *tmp_dircall_arg1_21;
    PyObject *tmp_dircall_arg1_22;
    PyObject *tmp_dircall_arg1_23;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_attr_6;
    PyObject *tmp_hasattr_attr_7;
    PyObject *tmp_hasattr_attr_8;
    PyObject *tmp_hasattr_attr_9;
    PyObject *tmp_hasattr_attr_10;
    PyObject *tmp_hasattr_attr_11;
    PyObject *tmp_hasattr_attr_12;
    PyObject *tmp_hasattr_attr_13;
    PyObject *tmp_hasattr_attr_14;
    PyObject *tmp_hasattr_attr_15;
    PyObject *tmp_hasattr_attr_16;
    PyObject *tmp_hasattr_attr_17;
    PyObject *tmp_hasattr_attr_18;
    PyObject *tmp_hasattr_attr_19;
    PyObject *tmp_hasattr_attr_20;
    PyObject *tmp_hasattr_attr_21;
    PyObject *tmp_hasattr_attr_22;
    PyObject *tmp_hasattr_attr_23;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_hasattr_source_6;
    PyObject *tmp_hasattr_source_7;
    PyObject *tmp_hasattr_source_8;
    PyObject *tmp_hasattr_source_9;
    PyObject *tmp_hasattr_source_10;
    PyObject *tmp_hasattr_source_11;
    PyObject *tmp_hasattr_source_12;
    PyObject *tmp_hasattr_source_13;
    PyObject *tmp_hasattr_source_14;
    PyObject *tmp_hasattr_source_15;
    PyObject *tmp_hasattr_source_16;
    PyObject *tmp_hasattr_source_17;
    PyObject *tmp_hasattr_source_18;
    PyObject *tmp_hasattr_source_19;
    PyObject *tmp_hasattr_source_20;
    PyObject *tmp_hasattr_source_21;
    PyObject *tmp_hasattr_source_22;
    PyObject *tmp_hasattr_source_23;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_key_name_8;
    PyObject *tmp_key_name_9;
    PyObject *tmp_key_name_10;
    PyObject *tmp_key_name_11;
    PyObject *tmp_key_name_12;
    PyObject *tmp_key_name_13;
    PyObject *tmp_key_name_14;
    PyObject *tmp_key_name_15;
    PyObject *tmp_key_name_16;
    PyObject *tmp_key_name_17;
    PyObject *tmp_key_name_18;
    PyObject *tmp_key_name_19;
    PyObject *tmp_key_name_20;
    PyObject *tmp_key_name_21;
    PyObject *tmp_key_name_22;
    PyObject *tmp_key_name_23;
    PyObject *tmp_key_name_24;
    PyObject *tmp_key_name_25;
    PyObject *tmp_key_name_26;
    PyObject *tmp_key_name_27;
    PyObject *tmp_key_name_28;
    PyObject *tmp_key_name_29;
    PyObject *tmp_key_name_30;
    PyObject *tmp_key_name_31;
    PyObject *tmp_key_name_32;
    PyObject *tmp_key_name_33;
    PyObject *tmp_key_name_34;
    PyObject *tmp_key_name_35;
    PyObject *tmp_key_name_36;
    PyObject *tmp_key_name_37;
    PyObject *tmp_key_name_38;
    PyObject *tmp_key_name_39;
    PyObject *tmp_key_name_40;
    PyObject *tmp_key_name_41;
    PyObject *tmp_key_name_42;
    PyObject *tmp_key_name_43;
    PyObject *tmp_key_name_44;
    PyObject *tmp_key_name_45;
    PyObject *tmp_key_name_46;
    PyObject *tmp_key_name_47;
    PyObject *tmp_key_name_48;
    PyObject *tmp_key_name_49;
    PyObject *tmp_key_name_50;
    PyObject *tmp_key_name_51;
    PyObject *tmp_key_name_52;
    PyObject *tmp_key_name_53;
    PyObject *tmp_key_name_54;
    PyObject *tmp_key_name_55;
    PyObject *tmp_key_name_56;
    PyObject *tmp_key_name_57;
    PyObject *tmp_key_name_58;
    PyObject *tmp_key_name_59;
    PyObject *tmp_key_name_60;
    PyObject *tmp_key_name_61;
    PyObject *tmp_key_name_62;
    PyObject *tmp_key_name_63;
    PyObject *tmp_key_name_64;
    PyObject *tmp_key_name_65;
    PyObject *tmp_key_name_66;
    PyObject *tmp_key_name_67;
    PyObject *tmp_key_name_68;
    PyObject *tmp_key_name_69;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_kw_name_9;
    PyObject *tmp_kw_name_10;
    PyObject *tmp_kw_name_11;
    PyObject *tmp_kw_name_12;
    PyObject *tmp_kw_name_13;
    PyObject *tmp_kw_name_14;
    PyObject *tmp_kw_name_15;
    PyObject *tmp_kw_name_16;
    PyObject *tmp_kw_name_17;
    PyObject *tmp_kw_name_18;
    PyObject *tmp_kw_name_19;
    PyObject *tmp_kw_name_20;
    PyObject *tmp_kw_name_21;
    PyObject *tmp_kw_name_22;
    PyObject *tmp_kw_name_23;
    PyObject *tmp_kw_name_24;
    PyObject *tmp_kw_name_25;
    PyObject *tmp_kw_name_26;
    PyObject *tmp_kw_name_27;
    PyObject *tmp_kw_name_28;
    PyObject *tmp_kw_name_29;
    PyObject *tmp_kw_name_30;
    PyObject *tmp_kw_name_31;
    PyObject *tmp_kw_name_32;
    PyObject *tmp_kw_name_33;
    PyObject *tmp_kw_name_34;
    PyObject *tmp_kw_name_35;
    PyObject *tmp_kw_name_36;
    PyObject *tmp_kw_name_37;
    PyObject *tmp_kw_name_38;
    PyObject *tmp_kw_name_39;
    PyObject *tmp_kw_name_40;
    PyObject *tmp_kw_name_41;
    PyObject *tmp_kw_name_42;
    PyObject *tmp_kw_name_43;
    PyObject *tmp_kw_name_44;
    PyObject *tmp_kw_name_45;
    PyObject *tmp_kw_name_46;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_metaclass_name_5;
    PyObject *tmp_metaclass_name_6;
    PyObject *tmp_metaclass_name_7;
    PyObject *tmp_metaclass_name_8;
    PyObject *tmp_metaclass_name_9;
    PyObject *tmp_metaclass_name_10;
    PyObject *tmp_metaclass_name_11;
    PyObject *tmp_metaclass_name_12;
    PyObject *tmp_metaclass_name_13;
    PyObject *tmp_metaclass_name_14;
    PyObject *tmp_metaclass_name_15;
    PyObject *tmp_metaclass_name_16;
    PyObject *tmp_metaclass_name_17;
    PyObject *tmp_metaclass_name_18;
    PyObject *tmp_metaclass_name_19;
    PyObject *tmp_metaclass_name_20;
    PyObject *tmp_metaclass_name_21;
    PyObject *tmp_metaclass_name_22;
    PyObject *tmp_metaclass_name_23;
    PyObject *tmp_name_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    PyObject *tmp_outline_return_value_7;
    PyObject *tmp_outline_return_value_8;
    PyObject *tmp_outline_return_value_9;
    PyObject *tmp_outline_return_value_10;
    PyObject *tmp_outline_return_value_11;
    PyObject *tmp_outline_return_value_12;
    PyObject *tmp_outline_return_value_13;
    PyObject *tmp_outline_return_value_14;
    PyObject *tmp_outline_return_value_15;
    PyObject *tmp_outline_return_value_16;
    PyObject *tmp_outline_return_value_17;
    PyObject *tmp_outline_return_value_18;
    PyObject *tmp_outline_return_value_19;
    PyObject *tmp_outline_return_value_20;
    PyObject *tmp_outline_return_value_21;
    PyObject *tmp_outline_return_value_22;
    PyObject *tmp_outline_return_value_23;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscribed_name_13;
    PyObject *tmp_subscribed_name_14;
    PyObject *tmp_subscribed_name_15;
    PyObject *tmp_subscribed_name_16;
    PyObject *tmp_subscribed_name_17;
    PyObject *tmp_subscribed_name_18;
    PyObject *tmp_subscribed_name_19;
    PyObject *tmp_subscribed_name_20;
    PyObject *tmp_subscribed_name_21;
    PyObject *tmp_subscribed_name_22;
    PyObject *tmp_subscribed_name_23;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_subscript_name_13;
    PyObject *tmp_subscript_name_14;
    PyObject *tmp_subscript_name_15;
    PyObject *tmp_subscript_name_16;
    PyObject *tmp_subscript_name_17;
    PyObject *tmp_subscript_name_18;
    PyObject *tmp_subscript_name_19;
    PyObject *tmp_subscript_name_20;
    PyObject *tmp_subscript_name_21;
    PyObject *tmp_subscript_name_22;
    PyObject *tmp_subscript_name_23;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_tuple_element_21;
    PyObject *tmp_tuple_element_22;
    PyObject *tmp_tuple_element_23;
    PyObject *tmp_tuple_element_24;
    PyObject *tmp_tuple_element_25;
    PyObject *tmp_tuple_element_26;
    PyObject *tmp_tuple_element_27;
    PyObject *tmp_tuple_element_28;
    PyObject *tmp_tuple_element_29;
    PyObject *tmp_tuple_element_30;
    PyObject *tmp_tuple_element_31;
    PyObject *tmp_tuple_element_32;
    PyObject *tmp_tuple_element_33;
    PyObject *tmp_tuple_element_34;
    PyObject *tmp_tuple_element_35;
    PyObject *tmp_tuple_element_36;
    PyObject *tmp_tuple_element_37;
    PyObject *tmp_tuple_element_38;
    PyObject *tmp_tuple_element_39;
    PyObject *tmp_tuple_element_40;
    PyObject *tmp_tuple_element_41;
    PyObject *tmp_tuple_element_42;
    PyObject *tmp_tuple_element_43;
    PyObject *tmp_tuple_element_44;
    PyObject *tmp_tuple_element_45;
    PyObject *tmp_tuple_element_46;
    PyObject *tmp_tuple_element_47;
    PyObject *tmp_tuple_element_48;
    PyObject *tmp_tuple_element_49;
    PyObject *tmp_tuple_element_50;
    PyObject *tmp_tuple_element_51;
    PyObject *tmp_tuple_element_52;
    PyObject *tmp_tuple_element_53;
    PyObject *tmp_tuple_element_54;
    PyObject *tmp_tuple_element_55;
    PyObject *tmp_tuple_element_56;
    PyObject *tmp_tuple_element_57;
    PyObject *tmp_tuple_element_58;
    PyObject *tmp_tuple_element_59;
    PyObject *tmp_tuple_element_60;
    PyObject *tmp_tuple_element_61;
    PyObject *tmp_tuple_element_62;
    PyObject *tmp_tuple_element_63;
    PyObject *tmp_tuple_element_64;
    PyObject *tmp_tuple_element_65;
    PyObject *tmp_tuple_element_66;
    PyObject *tmp_tuple_element_67;
    PyObject *tmp_tuple_element_68;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_type_arg_6;
    PyObject *tmp_type_arg_7;
    PyObject *tmp_type_arg_8;
    PyObject *tmp_type_arg_9;
    PyObject *tmp_type_arg_10;
    PyObject *tmp_type_arg_11;
    PyObject *tmp_type_arg_12;
    PyObject *tmp_type_arg_13;
    PyObject *tmp_type_arg_14;
    PyObject *tmp_type_arg_15;
    PyObject *tmp_type_arg_16;
    PyObject *tmp_type_arg_17;
    PyObject *tmp_type_arg_18;
    PyObject *tmp_type_arg_19;
    PyObject *tmp_type_arg_20;
    PyObject *tmp_type_arg_21;
    PyObject *tmp_type_arg_22;
    PyObject *tmp_type_arg_23;
    static struct Nuitka_FrameObject *cache_frame_580cbbecbbb7936998cb8a8258a1c861_2 = NULL;

    struct Nuitka_FrameObject *frame_580cbbecbbb7936998cb8a8258a1c861_2;

    struct Nuitka_FrameObject *frame_31a02c8d82d89f6e34595f6e8506edd1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    tmp_outline_return_value_7 = NULL;
    tmp_outline_return_value_8 = NULL;
    tmp_outline_return_value_9 = NULL;
    tmp_outline_return_value_10 = NULL;
    tmp_outline_return_value_11 = NULL;
    tmp_outline_return_value_12 = NULL;
    tmp_outline_return_value_13 = NULL;
    tmp_outline_return_value_14 = NULL;
    tmp_outline_return_value_15 = NULL;
    tmp_outline_return_value_16 = NULL;
    tmp_outline_return_value_17 = NULL;
    tmp_outline_return_value_18 = NULL;
    tmp_outline_return_value_19 = NULL;
    tmp_outline_return_value_20 = NULL;
    tmp_outline_return_value_21 = NULL;
    tmp_outline_return_value_22 = NULL;
    tmp_outline_return_value_23 = NULL;
    PyObject *locals_requests$exceptions_72 = NULL;
    PyObject *locals_requests$exceptions_68 = NULL;
    PyObject *locals_requests$exceptions_96 = NULL;
    PyObject *locals_requests$exceptions_64 = NULL;
    PyObject *locals_requests$exceptions_53 = NULL;
    PyObject *locals_requests$exceptions_104 = NULL;
    PyObject *locals_requests$exceptions_92 = NULL;
    PyObject *locals_requests$exceptions_100 = NULL;
    PyObject *locals_requests$exceptions_80 = NULL;
    PyObject *locals_requests$exceptions_124 = NULL;
    PyObject *locals_requests$exceptions_44 = NULL;
    PyObject *locals_requests$exceptions_84 = NULL;
    PyObject *locals_requests$exceptions_88 = NULL;
    PyObject *locals_requests$exceptions_32 = NULL;
    PyObject *locals_requests$exceptions_40 = NULL;
    PyObject *locals_requests$exceptions_108 = NULL;
    PyObject *locals_requests$exceptions_76 = NULL;
    PyObject *locals_requests$exceptions_12 = NULL;
    PyObject *locals_requests$exceptions_60 = NULL;
    PyObject *locals_requests$exceptions_119 = NULL;
    PyObject *locals_requests$exceptions_28 = NULL;
    PyObject *locals_requests$exceptions_114 = NULL;
    PyObject *locals_requests$exceptions_36 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_b2c98825348c9fcd71a85ac1bfc67cf8;
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_4118411709fd101091089b386ddd8f9f;
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_31a02c8d82d89f6e34595f6e8506edd1 = MAKE_MODULE_FRAME( codeobj_31a02c8d82d89f6e34595f6e8506edd1, module_requests$exceptions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_31a02c8d82d89f6e34595f6e8506edd1 );
    assert( Py_REFCNT( frame_31a02c8d82d89f6e34595f6e8506edd1 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_globals_name_1 = (PyObject *)moduledict_requests$exceptions;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_HTTPError_tuple;
    tmp_level_name_1 = const_int_0;
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 9;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_HTTPError );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_BaseHTTPError, tmp_assign_source_4 );
    // Tried code:
    tmp_dircall_arg1_1 = const_tuple_type_OSError_tuple;
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_5 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_5;

    tmp_assign_source_6 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_6;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_7 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_7;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_source_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    tmp_tuple_element_1 = const_str_plain_RequestException;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 12;
    tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_8 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_8;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_12 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_12, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_digest_2ad78bd49ece92478753ce0fc79a6e93;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_12, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_plain_RequestException;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_12, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_3;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_580cbbecbbb7936998cb8a8258a1c861_2, codeobj_580cbbecbbb7936998cb8a8258a1c861, module_requests$exceptions, sizeof(void *) );
    frame_580cbbecbbb7936998cb8a8258a1c861_2 = cache_frame_580cbbecbbb7936998cb8a8258a1c861_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_580cbbecbbb7936998cb8a8258a1c861_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_580cbbecbbb7936998cb8a8258a1c861_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_requests$exceptions$$$function_1___init__(  );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_12, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_580cbbecbbb7936998cb8a8258a1c861_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_580cbbecbbb7936998cb8a8258a1c861_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_580cbbecbbb7936998cb8a8258a1c861_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_580cbbecbbb7936998cb8a8258a1c861_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_580cbbecbbb7936998cb8a8258a1c861_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_580cbbecbbb7936998cb8a8258a1c861_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_580cbbecbbb7936998cb8a8258a1c861_2 == cache_frame_580cbbecbbb7936998cb8a8258a1c861_2 )
    {
        Py_DECREF( frame_580cbbecbbb7936998cb8a8258a1c861_2 );
    }
    cache_frame_580cbbecbbb7936998cb8a8258a1c861_2 = NULL;

    assertFrameObject( frame_580cbbecbbb7936998cb8a8258a1c861_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_compare_left_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_tuple_type_OSError_tuple;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_3;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictset_value = const_tuple_type_OSError_tuple;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_12, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_3;
    }
    branch_no_2:;
    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_tuple_element_2 = const_str_plain_RequestException;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_requests$exceptions_12;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 12;
    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_10;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_requests$exceptions_12 );
    locals_requests$exceptions_12 = NULL;
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_12 );
    locals_requests$exceptions_12 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    goto outline_result_1;
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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 12;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_9 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException, tmp_assign_source_9 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Tried code:
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;

        goto try_except_handler_4;
    }

    tmp_assign_source_11 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_11, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_2__bases_orig == NULL );
    tmp_class_creation_2__bases_orig = tmp_assign_source_11;

    tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_2 );
    Py_INCREF( tmp_dircall_arg1_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
        tmp_assign_source_12 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_12;

    tmp_assign_source_13 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_13;

    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_5 );
    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_cond_value_5 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_subscribed_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_14 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_14;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    branch_no_3:;
    tmp_hasattr_source_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_2 );
    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_source_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    tmp_tuple_element_4 = const_str_plain_HTTPError;
    tmp_args_name_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 28;
    tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_15 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_15;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_28 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_28, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_6;
    }
    tmp_dictset_value = const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_28, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_6;
    }
    tmp_dictset_value = const_str_plain_HTTPError;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_28, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_6;
    }
    tmp_compare_left_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = tmp_class_creation_2__bases_orig;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_6;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dictset_value = tmp_class_creation_2__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_28, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_6;
    }
    branch_no_4:;
    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_tuple_element_5 = const_str_plain_HTTPError;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = locals_requests$exceptions_28;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_5 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 28;
    tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_6;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_17;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    Py_DECREF( locals_requests$exceptions_28 );
    locals_requests$exceptions_28 = NULL;
    goto try_return_handler_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_28 );
    locals_requests$exceptions_28 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 28;
    goto try_except_handler_4;
    outline_result_2:;
    tmp_assign_source_16 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError, tmp_assign_source_16 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;

        goto try_except_handler_7;
    }

    tmp_assign_source_18 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_18, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_3__bases_orig == NULL );
    tmp_class_creation_3__bases_orig = tmp_assign_source_18;

    tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_3 );
    Py_INCREF( tmp_dircall_arg1_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
        tmp_assign_source_19 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_19;

    tmp_assign_source_20 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_20;

    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    tmp_cond_value_7 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_8 );
    tmp_key_name_8 = const_str_plain_metaclass;
    tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_cond_value_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_cond_value_8 );
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_subscribed_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_21 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_21;

    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    tmp_cond_value_9 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    branch_no_5:;
    tmp_hasattr_source_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_3 );
    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_source_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    tmp_tuple_element_7 = const_str_plain_ConnectionError;
    tmp_args_name_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_7 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 32;
    tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_22 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_22;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_32 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_32, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_9;
    }
    tmp_dictset_value = const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_32, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_9;
    }
    tmp_dictset_value = const_str_plain_ConnectionError;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_32, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_9;
    }
    tmp_compare_left_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = tmp_class_creation_3__bases_orig;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_9;
    }
    if ( tmp_cmp_NotEq_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_dictset_value = tmp_class_creation_3__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_32, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_9;
    }
    branch_no_6:;
    tmp_called_name_6 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_tuple_element_8 = const_str_plain_ConnectionError;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_8 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = locals_requests$exceptions_32;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_8 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 32;
    tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_9;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_24;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    Py_DECREF( locals_requests$exceptions_32 );
    locals_requests$exceptions_32 = NULL;
    goto try_return_handler_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_32 );
    locals_requests$exceptions_32 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 32;
    goto try_except_handler_7;
    outline_result_3:;
    tmp_assign_source_23 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_23 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
    }

    if ( tmp_tuple_element_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectionError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;

        goto try_except_handler_10;
    }

    tmp_assign_source_25 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_25, 0, tmp_tuple_element_9 );
    assert( tmp_class_creation_4__bases_orig == NULL );
    tmp_class_creation_4__bases_orig = tmp_assign_source_25;

    tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_4 );
    Py_INCREF( tmp_dircall_arg1_4 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
        tmp_assign_source_26 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_26;

    tmp_assign_source_27 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_27;

    tmp_key_name_10 = const_str_plain_metaclass;
    tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_10 );
    tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_10;
    }
    tmp_cond_value_10 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_10;
    }
    if ( tmp_cond_truth_10 == 1 )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_11 );
    tmp_key_name_11 = const_str_plain_metaclass;
    tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_10;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_cond_value_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_cond_value_11 );
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_10;
    }
    if ( tmp_cond_truth_11 == 1 )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_subscribed_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_0;
    tmp_type_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_type_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_10;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_10;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_bases_name_4 );
    tmp_assign_source_28 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    Py_DECREF( tmp_metaclass_name_4 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_28;

    tmp_key_name_12 = const_str_plain_metaclass;
    tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_12 );
    tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_10;
    }
    tmp_cond_value_12 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_10;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_10;
    }
    branch_no_7:;
    tmp_hasattr_source_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_4 );
    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_10;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_source_name_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_10;
    }
    tmp_tuple_element_10 = const_str_plain_ProxyError;
    tmp_args_name_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_10 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_10 );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 36;
    tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_10;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_29 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_29;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_36 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_36, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_12;
    }
    tmp_dictset_value = const_str_digest_3aedd4c9c88f311ca62d0cad34678af2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_36, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_12;
    }
    tmp_dictset_value = const_str_plain_ProxyError;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_36, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_12;
    }
    tmp_compare_left_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = tmp_class_creation_4__bases_orig;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_NotEq_4 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_12;
    }
    if ( tmp_cmp_NotEq_4 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_dictset_value = tmp_class_creation_4__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_36, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_12;
    }
    branch_no_8:;
    tmp_called_name_8 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_tuple_element_11 = const_str_plain_ProxyError;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_11 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_11 );
    tmp_tuple_element_11 = locals_requests$exceptions_36;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_11 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 36;
    tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_12;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_31;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    Py_DECREF( locals_requests$exceptions_36 );
    locals_requests$exceptions_36 = NULL;
    goto try_return_handler_11;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_36 );
    locals_requests$exceptions_36 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    goto outline_result_4;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 36;
    goto try_except_handler_10;
    outline_result_4:;
    tmp_assign_source_30 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ProxyError, tmp_assign_source_30 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Tried code:
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
    }

    if ( tmp_tuple_element_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectionError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;

        goto try_except_handler_13;
    }

    tmp_assign_source_32 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_assign_source_32, 0, tmp_tuple_element_12 );
    assert( tmp_class_creation_5__bases_orig == NULL );
    tmp_class_creation_5__bases_orig = tmp_assign_source_32;

    tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_5 );
    Py_INCREF( tmp_dircall_arg1_5 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
        tmp_assign_source_33 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_33;

    tmp_assign_source_34 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_34;

    tmp_key_name_13 = const_str_plain_metaclass;
    tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_13 );
    tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    tmp_cond_value_13 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    if ( tmp_cond_truth_13 == 1 )
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_14 );
    tmp_key_name_14 = const_str_plain_metaclass;
    tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_cond_value_14 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_cond_value_14 );
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    if ( tmp_cond_truth_14 == 1 )
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_subscribed_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_14:;
    condexpr_end_13:;
    tmp_bases_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_bases_name_5 );
    tmp_assign_source_35 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    Py_DECREF( tmp_metaclass_name_5 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_35;

    tmp_key_name_15 = const_str_plain_metaclass;
    tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_15 );
    tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    tmp_cond_value_15 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    if ( tmp_cond_truth_15 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    branch_no_9:;
    tmp_hasattr_source_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_5 );
    tmp_hasattr_attr_5 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_5, tmp_hasattr_attr_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_source_name_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    tmp_tuple_element_13 = const_str_plain_SSLError;
    tmp_args_name_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_13 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_13 );
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 40;
    tmp_assign_source_36 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_36 = PyDict_New();
    condexpr_end_15:;
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_36;

    tmp_set_locals = tmp_class_creation_5__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_40 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_40, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_15;
    }
    tmp_dictset_value = const_str_digest_35d6e09b700b272e1f4429814168031d;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_40, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_15;
    }
    tmp_dictset_value = const_str_plain_SSLError;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_40, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_15;
    }
    tmp_compare_left_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = tmp_class_creation_5__bases_orig;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_NotEq_5 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_15;
    }
    if ( tmp_cmp_NotEq_5 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_dictset_value = tmp_class_creation_5__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_40, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_15;
    }
    branch_no_10:;
    tmp_called_name_10 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_tuple_element_14 = const_str_plain_SSLError;
    tmp_args_name_10 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_14 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_14 );
    tmp_tuple_element_14 = locals_requests$exceptions_40;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_14 );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_10 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 40;
    tmp_assign_source_38 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_15;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_38;

    tmp_outline_return_value_5 = outline_4_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_5 );
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_15;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    Py_DECREF( locals_requests$exceptions_40 );
    locals_requests$exceptions_40 = NULL;
    goto try_return_handler_14;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_40 );
    locals_requests$exceptions_40 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    goto outline_result_5;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 40;
    goto try_except_handler_13;
    outline_result_5:;
    tmp_assign_source_37 = tmp_outline_return_value_5;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_37 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__prepared );
    Py_DECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Tried code:
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;

        goto try_except_handler_16;
    }

    tmp_assign_source_39 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_assign_source_39, 0, tmp_tuple_element_15 );
    assert( tmp_class_creation_6__bases_orig == NULL );
    tmp_class_creation_6__bases_orig = tmp_assign_source_39;

    tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_6 );
    Py_INCREF( tmp_dircall_arg1_6 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
        tmp_assign_source_40 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_16;
    }
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_40;

    tmp_assign_source_41 = PyDict_New();
    assert( tmp_class_creation_6__class_decl_dict == NULL );
    tmp_class_creation_6__class_decl_dict = tmp_assign_source_41;

    tmp_key_name_16 = const_str_plain_metaclass;
    tmp_dict_name_16 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_16 );
    tmp_res = PyDict_Contains( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_16;
    }
    tmp_cond_value_16 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_16;
    }
    if ( tmp_cond_truth_16 == 1 )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_dict_name_17 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_17 );
    tmp_key_name_17 = const_str_plain_metaclass;
    tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_16;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_cond_value_17 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_cond_value_17 );
    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_16;
    }
    if ( tmp_cond_truth_17 == 1 )
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    tmp_subscribed_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = const_int_0;
    tmp_type_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_type_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_16;
    }
    tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_6 );
    Py_DECREF( tmp_type_arg_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_16;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_6 );
    condexpr_end_17:;
    condexpr_end_16:;
    tmp_bases_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_bases_name_6 );
    tmp_assign_source_42 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    Py_DECREF( tmp_metaclass_name_6 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_16;
    }
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_42;

    tmp_key_name_18 = const_str_plain_metaclass;
    tmp_dict_name_18 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_18 );
    tmp_res = PyDict_Contains( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_16;
    }
    tmp_cond_value_18 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_16;
    }
    if ( tmp_cond_truth_18 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_16;
    }
    branch_no_11:;
    tmp_hasattr_source_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_6 );
    tmp_hasattr_attr_6 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_6, tmp_hasattr_attr_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_16;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_18;
    }
    else
    {
        goto condexpr_false_18;
    }
    condexpr_true_18:;
    tmp_source_name_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_16;
    }
    tmp_tuple_element_16 = const_str_plain_Timeout;
    tmp_args_name_11 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_16 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_16 );
    tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_11 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 44;
    tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_11 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_16;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_43 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_class_creation_6__prepared == NULL );
    tmp_class_creation_6__prepared = tmp_assign_source_43;

    tmp_set_locals = tmp_class_creation_6__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_44 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_44, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_18;
    }
    tmp_dictset_value = const_str_digest_34a451307fc6aab1649478fed3307568;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_44, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_18;
    }
    tmp_dictset_value = const_str_plain_Timeout;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_44, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_18;
    }
    tmp_compare_left_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = tmp_class_creation_6__bases_orig;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_NotEq_6 = RICH_COMPARE_BOOL_NE( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_NotEq_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_18;
    }
    if ( tmp_cmp_NotEq_6 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_dictset_value = tmp_class_creation_6__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_44, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_18;
    }
    branch_no_12:;
    tmp_called_name_12 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_12 );
    tmp_tuple_element_17 = const_str_plain_Timeout;
    tmp_args_name_12 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_17 );
    tmp_tuple_element_17 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_17 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_17 );
    tmp_tuple_element_17 = locals_requests$exceptions_44;
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_17 );
    tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_12 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 44;
    tmp_assign_source_45 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_18;
    }
    assert( outline_5_var___class__ == NULL );
    outline_5_var___class__ = tmp_assign_source_45;

    tmp_outline_return_value_6 = outline_5_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_6 );
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_18;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    Py_DECREF( locals_requests$exceptions_44 );
    locals_requests$exceptions_44 = NULL;
    goto try_return_handler_17;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_44 );
    locals_requests$exceptions_44 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_17;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_17:;
    CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
    Py_DECREF( outline_5_var___class__ );
    outline_5_var___class__ = NULL;

    goto outline_result_6;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto outline_exception_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 44;
    goto try_except_handler_16;
    outline_result_6:;
    tmp_assign_source_44 = tmp_outline_return_value_6;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout, tmp_assign_source_44 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_decl_dict );
    Py_DECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__prepared );
    Py_DECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Tried code:
    tmp_tuple_element_18 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError );

    if (unlikely( tmp_tuple_element_18 == NULL ))
    {
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
    }

    if ( tmp_tuple_element_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectionError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto try_except_handler_19;
    }

    tmp_assign_source_46 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_assign_source_46, 0, tmp_tuple_element_18 );
    tmp_tuple_element_18 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout );

    if (unlikely( tmp_tuple_element_18 == NULL ))
    {
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout );
    }

    if ( tmp_tuple_element_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_46 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto try_except_handler_19;
    }

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_assign_source_46, 1, tmp_tuple_element_18 );
    assert( tmp_class_creation_7__bases_orig == NULL );
    tmp_class_creation_7__bases_orig = tmp_assign_source_46;

    tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_7 );
    Py_INCREF( tmp_dircall_arg1_7 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
        tmp_assign_source_47 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_19;
    }
    assert( tmp_class_creation_7__bases == NULL );
    tmp_class_creation_7__bases = tmp_assign_source_47;

    tmp_assign_source_48 = PyDict_New();
    assert( tmp_class_creation_7__class_decl_dict == NULL );
    tmp_class_creation_7__class_decl_dict = tmp_assign_source_48;

    tmp_key_name_19 = const_str_plain_metaclass;
    tmp_dict_name_19 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_19 );
    tmp_res = PyDict_Contains( tmp_dict_name_19, tmp_key_name_19 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_19;
    }
    tmp_cond_value_19 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_19;
    }
    if ( tmp_cond_truth_19 == 1 )
    {
        goto condexpr_true_19;
    }
    else
    {
        goto condexpr_false_19;
    }
    condexpr_true_19:;
    tmp_dict_name_20 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_20 );
    tmp_key_name_20 = const_str_plain_metaclass;
    tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_19;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_cond_value_20 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_cond_value_20 );
    tmp_cond_truth_20 = CHECK_IF_TRUE( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_19;
    }
    if ( tmp_cond_truth_20 == 1 )
    {
        goto condexpr_true_20;
    }
    else
    {
        goto condexpr_false_20;
    }
    condexpr_true_20:;
    tmp_subscribed_name_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_7 = const_int_0;
    tmp_type_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_type_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_19;
    }
    tmp_metaclass_name_7 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_19;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_metaclass_name_7 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_7 );
    condexpr_end_20:;
    condexpr_end_19:;
    tmp_bases_name_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_bases_name_7 );
    tmp_assign_source_49 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
    Py_DECREF( tmp_metaclass_name_7 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_19;
    }
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_49;

    tmp_key_name_21 = const_str_plain_metaclass;
    tmp_dict_name_21 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_21 );
    tmp_res = PyDict_Contains( tmp_dict_name_21, tmp_key_name_21 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_19;
    }
    tmp_cond_value_21 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_21 = CHECK_IF_TRUE( tmp_cond_value_21 );
    if ( tmp_cond_truth_21 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_19;
    }
    if ( tmp_cond_truth_21 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_19;
    }
    branch_no_13:;
    tmp_hasattr_source_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_7 );
    tmp_hasattr_attr_7 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_7, tmp_hasattr_attr_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_19;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_21;
    }
    else
    {
        goto condexpr_false_21;
    }
    condexpr_true_21:;
    tmp_source_name_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_19;
    }
    tmp_tuple_element_19 = const_str_plain_ConnectTimeout;
    tmp_args_name_13 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_19 );
    tmp_tuple_element_19 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_tuple_element_19 );
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_13, 1, tmp_tuple_element_19 );
    tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_13 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 53;
    tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_name_13 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_19;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_assign_source_50 = PyDict_New();
    condexpr_end_21:;
    assert( tmp_class_creation_7__prepared == NULL );
    tmp_class_creation_7__prepared = tmp_assign_source_50;

    tmp_set_locals = tmp_class_creation_7__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_53 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_53, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_21;
    }
    tmp_dictset_value = const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_53, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_21;
    }
    tmp_dictset_value = const_str_plain_ConnectTimeout;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_53, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_21;
    }
    tmp_compare_left_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_compare_left_7 );
    tmp_compare_right_7 = tmp_class_creation_7__bases_orig;

    CHECK_OBJECT( tmp_compare_right_7 );
    tmp_cmp_NotEq_7 = RICH_COMPARE_BOOL_NE( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_NotEq_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_21;
    }
    if ( tmp_cmp_NotEq_7 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_dictset_value = tmp_class_creation_7__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_53, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_21;
    }
    branch_no_14:;
    tmp_called_name_14 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_14 );
    tmp_tuple_element_20 = const_str_plain_ConnectTimeout;
    tmp_args_name_14 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_tuple_element_20 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_20 );
    tmp_tuple_element_20 = locals_requests$exceptions_53;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_14, 2, tmp_tuple_element_20 );
    tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_14 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 53;
    tmp_assign_source_52 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_14, tmp_kw_name_14 );
    Py_DECREF( tmp_args_name_14 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_21;
    }
    assert( outline_6_var___class__ == NULL );
    outline_6_var___class__ = tmp_assign_source_52;

    tmp_outline_return_value_7 = outline_6_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_7 );
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_21;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_21:;
    Py_DECREF( locals_requests$exceptions_53 );
    locals_requests$exceptions_53 = NULL;
    goto try_return_handler_20;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_53 );
    locals_requests$exceptions_53 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_20;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_20:;
    CHECK_OBJECT( (PyObject *)outline_6_var___class__ );
    Py_DECREF( outline_6_var___class__ );
    outline_6_var___class__ = NULL;

    goto outline_result_7;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto outline_exception_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 53;
    goto try_except_handler_19;
    outline_result_7:;
    tmp_assign_source_51 = tmp_outline_return_value_7;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectTimeout, tmp_assign_source_51 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_decl_dict );
    Py_DECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__prepared );
    Py_DECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Tried code:
    tmp_tuple_element_21 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout );

    if (unlikely( tmp_tuple_element_21 == NULL ))
    {
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout );
    }

    if ( tmp_tuple_element_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;

        goto try_except_handler_22;
    }

    tmp_assign_source_53 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_assign_source_53, 0, tmp_tuple_element_21 );
    assert( tmp_class_creation_8__bases_orig == NULL );
    tmp_class_creation_8__bases_orig = tmp_assign_source_53;

    tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_8 );
    Py_INCREF( tmp_dircall_arg1_8 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
        tmp_assign_source_54 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_22;
    }
    assert( tmp_class_creation_8__bases == NULL );
    tmp_class_creation_8__bases = tmp_assign_source_54;

    tmp_assign_source_55 = PyDict_New();
    assert( tmp_class_creation_8__class_decl_dict == NULL );
    tmp_class_creation_8__class_decl_dict = tmp_assign_source_55;

    tmp_key_name_22 = const_str_plain_metaclass;
    tmp_dict_name_22 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_22 );
    tmp_res = PyDict_Contains( tmp_dict_name_22, tmp_key_name_22 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_22;
    }
    tmp_cond_value_22 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_22 = CHECK_IF_TRUE( tmp_cond_value_22 );
    if ( tmp_cond_truth_22 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_22;
    }
    if ( tmp_cond_truth_22 == 1 )
    {
        goto condexpr_true_22;
    }
    else
    {
        goto condexpr_false_22;
    }
    condexpr_true_22:;
    tmp_dict_name_23 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_23 );
    tmp_key_name_23 = const_str_plain_metaclass;
    tmp_metaclass_name_8 = DICT_GET_ITEM( tmp_dict_name_23, tmp_key_name_23 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_22;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_cond_value_23 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_cond_value_23 );
    tmp_cond_truth_23 = CHECK_IF_TRUE( tmp_cond_value_23 );
    if ( tmp_cond_truth_23 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_22;
    }
    if ( tmp_cond_truth_23 == 1 )
    {
        goto condexpr_true_23;
    }
    else
    {
        goto condexpr_false_23;
    }
    condexpr_true_23:;
    tmp_subscribed_name_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_subscribed_name_8 );
    tmp_subscript_name_8 = const_int_0;
    tmp_type_arg_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_type_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_22;
    }
    tmp_metaclass_name_8 = BUILTIN_TYPE1( tmp_type_arg_8 );
    Py_DECREF( tmp_type_arg_8 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_22;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_metaclass_name_8 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_8 );
    condexpr_end_23:;
    condexpr_end_22:;
    tmp_bases_name_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_bases_name_8 );
    tmp_assign_source_56 = SELECT_METACLASS( tmp_metaclass_name_8, tmp_bases_name_8 );
    Py_DECREF( tmp_metaclass_name_8 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_22;
    }
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_56;

    tmp_key_name_24 = const_str_plain_metaclass;
    tmp_dict_name_24 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_24 );
    tmp_res = PyDict_Contains( tmp_dict_name_24, tmp_key_name_24 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_22;
    }
    tmp_cond_value_24 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_24 = CHECK_IF_TRUE( tmp_cond_value_24 );
    if ( tmp_cond_truth_24 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_22;
    }
    if ( tmp_cond_truth_24 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_22;
    }
    branch_no_15:;
    tmp_hasattr_source_8 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_8 );
    tmp_hasattr_attr_8 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_8, tmp_hasattr_attr_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_22;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_24;
    }
    else
    {
        goto condexpr_false_24;
    }
    condexpr_true_24:;
    tmp_source_name_8 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_22;
    }
    tmp_tuple_element_22 = const_str_plain_ReadTimeout;
    tmp_args_name_15 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_15, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_tuple_element_22 );
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_15, 1, tmp_tuple_element_22 );
    tmp_kw_name_15 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_15 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 60;
    tmp_assign_source_57 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_15, tmp_kw_name_15 );
    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_name_15 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_22;
    }
    goto condexpr_end_24;
    condexpr_false_24:;
    tmp_assign_source_57 = PyDict_New();
    condexpr_end_24:;
    assert( tmp_class_creation_8__prepared == NULL );
    tmp_class_creation_8__prepared = tmp_assign_source_57;

    tmp_set_locals = tmp_class_creation_8__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_60 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_60, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_24;
    }
    tmp_dictset_value = const_str_digest_b8f960a38723097fb701d7986528073c;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_60, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_24;
    }
    tmp_dictset_value = const_str_plain_ReadTimeout;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_60, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_24;
    }
    tmp_compare_left_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_compare_left_8 );
    tmp_compare_right_8 = tmp_class_creation_8__bases_orig;

    CHECK_OBJECT( tmp_compare_right_8 );
    tmp_cmp_NotEq_8 = RICH_COMPARE_BOOL_NE( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_NotEq_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_24;
    }
    if ( tmp_cmp_NotEq_8 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_dictset_value = tmp_class_creation_8__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_60, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_24;
    }
    branch_no_16:;
    tmp_called_name_16 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_called_name_16 );
    tmp_tuple_element_23 = const_str_plain_ReadTimeout;
    tmp_args_name_16 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_args_name_16, 0, tmp_tuple_element_23 );
    tmp_tuple_element_23 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_tuple_element_23 );
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_args_name_16, 1, tmp_tuple_element_23 );
    tmp_tuple_element_23 = locals_requests$exceptions_60;
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_args_name_16, 2, tmp_tuple_element_23 );
    tmp_kw_name_16 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_16 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 60;
    tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_16, tmp_kw_name_16 );
    Py_DECREF( tmp_args_name_16 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_24;
    }
    assert( outline_7_var___class__ == NULL );
    outline_7_var___class__ = tmp_assign_source_59;

    tmp_outline_return_value_8 = outline_7_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_8 );
    Py_INCREF( tmp_outline_return_value_8 );
    goto try_return_handler_24;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_24:;
    Py_DECREF( locals_requests$exceptions_60 );
    locals_requests$exceptions_60 = NULL;
    goto try_return_handler_23;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_60 );
    locals_requests$exceptions_60 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_23;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_23:;
    CHECK_OBJECT( (PyObject *)outline_7_var___class__ );
    Py_DECREF( outline_7_var___class__ );
    outline_7_var___class__ = NULL;

    goto outline_result_8;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto outline_exception_8;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_8:;
    exception_lineno = 60;
    goto try_except_handler_22;
    outline_result_8:;
    tmp_assign_source_58 = tmp_outline_return_value_8;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ReadTimeout, tmp_assign_source_58 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__bases );
    Py_DECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_decl_dict );
    Py_DECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__prepared );
    Py_DECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Tried code:
    tmp_tuple_element_24 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_24 == NULL ))
    {
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;

        goto try_except_handler_25;
    }

    tmp_assign_source_60 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_assign_source_60, 0, tmp_tuple_element_24 );
    assert( tmp_class_creation_9__bases_orig == NULL );
    tmp_class_creation_9__bases_orig = tmp_assign_source_60;

    tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_9 );
    Py_INCREF( tmp_dircall_arg1_9 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
        tmp_assign_source_61 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_25;
    }
    assert( tmp_class_creation_9__bases == NULL );
    tmp_class_creation_9__bases = tmp_assign_source_61;

    tmp_assign_source_62 = PyDict_New();
    assert( tmp_class_creation_9__class_decl_dict == NULL );
    tmp_class_creation_9__class_decl_dict = tmp_assign_source_62;

    tmp_key_name_25 = const_str_plain_metaclass;
    tmp_dict_name_25 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_25 );
    tmp_res = PyDict_Contains( tmp_dict_name_25, tmp_key_name_25 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_25;
    }
    tmp_cond_value_25 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_25 = CHECK_IF_TRUE( tmp_cond_value_25 );
    if ( tmp_cond_truth_25 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_25;
    }
    if ( tmp_cond_truth_25 == 1 )
    {
        goto condexpr_true_25;
    }
    else
    {
        goto condexpr_false_25;
    }
    condexpr_true_25:;
    tmp_dict_name_26 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_26 );
    tmp_key_name_26 = const_str_plain_metaclass;
    tmp_metaclass_name_9 = DICT_GET_ITEM( tmp_dict_name_26, tmp_key_name_26 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_25;
    }
    goto condexpr_end_25;
    condexpr_false_25:;
    tmp_cond_value_26 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_cond_value_26 );
    tmp_cond_truth_26 = CHECK_IF_TRUE( tmp_cond_value_26 );
    if ( tmp_cond_truth_26 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_25;
    }
    if ( tmp_cond_truth_26 == 1 )
    {
        goto condexpr_true_26;
    }
    else
    {
        goto condexpr_false_26;
    }
    condexpr_true_26:;
    tmp_subscribed_name_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_subscribed_name_9 );
    tmp_subscript_name_9 = const_int_0;
    tmp_type_arg_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_type_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_25;
    }
    tmp_metaclass_name_9 = BUILTIN_TYPE1( tmp_type_arg_9 );
    Py_DECREF( tmp_type_arg_9 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_25;
    }
    goto condexpr_end_26;
    condexpr_false_26:;
    tmp_metaclass_name_9 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_9 );
    condexpr_end_26:;
    condexpr_end_25:;
    tmp_bases_name_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_bases_name_9 );
    tmp_assign_source_63 = SELECT_METACLASS( tmp_metaclass_name_9, tmp_bases_name_9 );
    Py_DECREF( tmp_metaclass_name_9 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_25;
    }
    assert( tmp_class_creation_9__metaclass == NULL );
    tmp_class_creation_9__metaclass = tmp_assign_source_63;

    tmp_key_name_27 = const_str_plain_metaclass;
    tmp_dict_name_27 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_27 );
    tmp_res = PyDict_Contains( tmp_dict_name_27, tmp_key_name_27 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_25;
    }
    tmp_cond_value_27 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_27 = CHECK_IF_TRUE( tmp_cond_value_27 );
    if ( tmp_cond_truth_27 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_25;
    }
    if ( tmp_cond_truth_27 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_25;
    }
    branch_no_17:;
    tmp_hasattr_source_9 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_9 );
    tmp_hasattr_attr_9 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_9, tmp_hasattr_attr_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_25;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_27;
    }
    else
    {
        goto condexpr_false_27;
    }
    condexpr_true_27:;
    tmp_source_name_9 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___prepare__ );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_25;
    }
    tmp_tuple_element_25 = const_str_plain_URLRequired;
    tmp_args_name_17 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_args_name_17, 0, tmp_tuple_element_25 );
    tmp_tuple_element_25 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_tuple_element_25 );
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_args_name_17, 1, tmp_tuple_element_25 );
    tmp_kw_name_17 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_17 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 64;
    tmp_assign_source_64 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_17, tmp_kw_name_17 );
    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_name_17 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_25;
    }
    goto condexpr_end_27;
    condexpr_false_27:;
    tmp_assign_source_64 = PyDict_New();
    condexpr_end_27:;
    assert( tmp_class_creation_9__prepared == NULL );
    tmp_class_creation_9__prepared = tmp_assign_source_64;

    tmp_set_locals = tmp_class_creation_9__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_64 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_64, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_27;
    }
    tmp_dictset_value = const_str_digest_841f485de6d4157389a41ea63dc14155;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_64, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_27;
    }
    tmp_dictset_value = const_str_plain_URLRequired;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_64, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_27;
    }
    tmp_compare_left_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_compare_left_9 );
    tmp_compare_right_9 = tmp_class_creation_9__bases_orig;

    CHECK_OBJECT( tmp_compare_right_9 );
    tmp_cmp_NotEq_9 = RICH_COMPARE_BOOL_NE( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_NotEq_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_27;
    }
    if ( tmp_cmp_NotEq_9 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_dictset_value = tmp_class_creation_9__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_64, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_27;
    }
    branch_no_18:;
    tmp_called_name_18 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_called_name_18 );
    tmp_tuple_element_26 = const_str_plain_URLRequired;
    tmp_args_name_18 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_18, 0, tmp_tuple_element_26 );
    tmp_tuple_element_26 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_tuple_element_26 );
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_18, 1, tmp_tuple_element_26 );
    tmp_tuple_element_26 = locals_requests$exceptions_64;
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_18, 2, tmp_tuple_element_26 );
    tmp_kw_name_18 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_18 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 64;
    tmp_assign_source_66 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_18, tmp_kw_name_18 );
    Py_DECREF( tmp_args_name_18 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_27;
    }
    assert( outline_8_var___class__ == NULL );
    outline_8_var___class__ = tmp_assign_source_66;

    tmp_outline_return_value_9 = outline_8_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_9 );
    Py_INCREF( tmp_outline_return_value_9 );
    goto try_return_handler_27;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_27:;
    Py_DECREF( locals_requests$exceptions_64 );
    locals_requests$exceptions_64 = NULL;
    goto try_return_handler_26;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_64 );
    locals_requests$exceptions_64 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_26;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_26:;
    CHECK_OBJECT( (PyObject *)outline_8_var___class__ );
    Py_DECREF( outline_8_var___class__ );
    outline_8_var___class__ = NULL;

    goto outline_result_9;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto outline_exception_9;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_9:;
    exception_lineno = 64;
    goto try_except_handler_25;
    outline_result_9:;
    tmp_assign_source_65 = tmp_outline_return_value_9;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_URLRequired, tmp_assign_source_65 );
    goto try_end_9;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__bases );
    Py_DECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_decl_dict );
    Py_DECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__prepared );
    Py_DECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Tried code:
    tmp_tuple_element_27 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_27 == NULL ))
    {
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;

        goto try_except_handler_28;
    }

    tmp_assign_source_67 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_assign_source_67, 0, tmp_tuple_element_27 );
    assert( tmp_class_creation_10__bases_orig == NULL );
    tmp_class_creation_10__bases_orig = tmp_assign_source_67;

    tmp_dircall_arg1_10 = tmp_class_creation_10__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_10 );
    Py_INCREF( tmp_dircall_arg1_10 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
        tmp_assign_source_68 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_28;
    }
    assert( tmp_class_creation_10__bases == NULL );
    tmp_class_creation_10__bases = tmp_assign_source_68;

    tmp_assign_source_69 = PyDict_New();
    assert( tmp_class_creation_10__class_decl_dict == NULL );
    tmp_class_creation_10__class_decl_dict = tmp_assign_source_69;

    tmp_key_name_28 = const_str_plain_metaclass;
    tmp_dict_name_28 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_28 );
    tmp_res = PyDict_Contains( tmp_dict_name_28, tmp_key_name_28 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_28;
    }
    tmp_cond_value_28 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_28 = CHECK_IF_TRUE( tmp_cond_value_28 );
    if ( tmp_cond_truth_28 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_28;
    }
    if ( tmp_cond_truth_28 == 1 )
    {
        goto condexpr_true_28;
    }
    else
    {
        goto condexpr_false_28;
    }
    condexpr_true_28:;
    tmp_dict_name_29 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_29 );
    tmp_key_name_29 = const_str_plain_metaclass;
    tmp_metaclass_name_10 = DICT_GET_ITEM( tmp_dict_name_29, tmp_key_name_29 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_28;
    }
    goto condexpr_end_28;
    condexpr_false_28:;
    tmp_cond_value_29 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_cond_value_29 );
    tmp_cond_truth_29 = CHECK_IF_TRUE( tmp_cond_value_29 );
    if ( tmp_cond_truth_29 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_28;
    }
    if ( tmp_cond_truth_29 == 1 )
    {
        goto condexpr_true_29;
    }
    else
    {
        goto condexpr_false_29;
    }
    condexpr_true_29:;
    tmp_subscribed_name_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_subscribed_name_10 );
    tmp_subscript_name_10 = const_int_0;
    tmp_type_arg_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_type_arg_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_28;
    }
    tmp_metaclass_name_10 = BUILTIN_TYPE1( tmp_type_arg_10 );
    Py_DECREF( tmp_type_arg_10 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_28;
    }
    goto condexpr_end_29;
    condexpr_false_29:;
    tmp_metaclass_name_10 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_10 );
    condexpr_end_29:;
    condexpr_end_28:;
    tmp_bases_name_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_bases_name_10 );
    tmp_assign_source_70 = SELECT_METACLASS( tmp_metaclass_name_10, tmp_bases_name_10 );
    Py_DECREF( tmp_metaclass_name_10 );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_28;
    }
    assert( tmp_class_creation_10__metaclass == NULL );
    tmp_class_creation_10__metaclass = tmp_assign_source_70;

    tmp_key_name_30 = const_str_plain_metaclass;
    tmp_dict_name_30 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_30 );
    tmp_res = PyDict_Contains( tmp_dict_name_30, tmp_key_name_30 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_28;
    }
    tmp_cond_value_30 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_30 = CHECK_IF_TRUE( tmp_cond_value_30 );
    if ( tmp_cond_truth_30 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_28;
    }
    if ( tmp_cond_truth_30 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_28;
    }
    branch_no_19:;
    tmp_hasattr_source_10 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_10 );
    tmp_hasattr_attr_10 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_10, tmp_hasattr_attr_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_28;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_30;
    }
    else
    {
        goto condexpr_false_30;
    }
    condexpr_true_30:;
    tmp_source_name_10 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_28;
    }
    tmp_tuple_element_28 = const_str_plain_TooManyRedirects;
    tmp_args_name_19 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_19, 0, tmp_tuple_element_28 );
    tmp_tuple_element_28 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_tuple_element_28 );
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_19, 1, tmp_tuple_element_28 );
    tmp_kw_name_19 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_19 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 68;
    tmp_assign_source_71 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_19, tmp_kw_name_19 );
    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_name_19 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_28;
    }
    goto condexpr_end_30;
    condexpr_false_30:;
    tmp_assign_source_71 = PyDict_New();
    condexpr_end_30:;
    assert( tmp_class_creation_10__prepared == NULL );
    tmp_class_creation_10__prepared = tmp_assign_source_71;

    tmp_set_locals = tmp_class_creation_10__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_68 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_68, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_30;
    }
    tmp_dictset_value = const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_68, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_30;
    }
    tmp_dictset_value = const_str_plain_TooManyRedirects;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_68, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_30;
    }
    tmp_compare_left_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_compare_left_10 );
    tmp_compare_right_10 = tmp_class_creation_10__bases_orig;

    CHECK_OBJECT( tmp_compare_right_10 );
    tmp_cmp_NotEq_10 = RICH_COMPARE_BOOL_NE( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_NotEq_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_30;
    }
    if ( tmp_cmp_NotEq_10 == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_dictset_value = tmp_class_creation_10__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_68, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_30;
    }
    branch_no_20:;
    tmp_called_name_20 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_called_name_20 );
    tmp_tuple_element_29 = const_str_plain_TooManyRedirects;
    tmp_args_name_20 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_args_name_20, 0, tmp_tuple_element_29 );
    tmp_tuple_element_29 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_tuple_element_29 );
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_args_name_20, 1, tmp_tuple_element_29 );
    tmp_tuple_element_29 = locals_requests$exceptions_68;
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_args_name_20, 2, tmp_tuple_element_29 );
    tmp_kw_name_20 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_20 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 68;
    tmp_assign_source_73 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_20, tmp_kw_name_20 );
    Py_DECREF( tmp_args_name_20 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_30;
    }
    assert( outline_9_var___class__ == NULL );
    outline_9_var___class__ = tmp_assign_source_73;

    tmp_outline_return_value_10 = outline_9_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_10 );
    Py_INCREF( tmp_outline_return_value_10 );
    goto try_return_handler_30;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_30:;
    Py_DECREF( locals_requests$exceptions_68 );
    locals_requests$exceptions_68 = NULL;
    goto try_return_handler_29;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_68 );
    locals_requests$exceptions_68 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto try_except_handler_29;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_29:;
    CHECK_OBJECT( (PyObject *)outline_9_var___class__ );
    Py_DECREF( outline_9_var___class__ );
    outline_9_var___class__ = NULL;

    goto outline_result_10;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto outline_exception_10;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_10:;
    exception_lineno = 68;
    goto try_except_handler_28;
    outline_result_10:;
    tmp_assign_source_72 = tmp_outline_return_value_10;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_TooManyRedirects, tmp_assign_source_72 );
    goto try_end_10;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__bases );
    Py_DECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class_decl_dict );
    Py_DECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__metaclass );
    Py_DECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__prepared );
    Py_DECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    // Tried code:
    tmp_tuple_element_30 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_30 == NULL ))
    {
        tmp_tuple_element_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;

        goto try_except_handler_31;
    }

    tmp_assign_source_74 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_assign_source_74, 0, tmp_tuple_element_30 );
    tmp_tuple_element_30 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_assign_source_74, 1, tmp_tuple_element_30 );
    assert( tmp_class_creation_11__bases_orig == NULL );
    tmp_class_creation_11__bases_orig = tmp_assign_source_74;

    tmp_dircall_arg1_11 = tmp_class_creation_11__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_11 );
    Py_INCREF( tmp_dircall_arg1_11 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
        tmp_assign_source_75 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_31;
    }
    assert( tmp_class_creation_11__bases == NULL );
    tmp_class_creation_11__bases = tmp_assign_source_75;

    tmp_assign_source_76 = PyDict_New();
    assert( tmp_class_creation_11__class_decl_dict == NULL );
    tmp_class_creation_11__class_decl_dict = tmp_assign_source_76;

    tmp_key_name_31 = const_str_plain_metaclass;
    tmp_dict_name_31 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_31 );
    tmp_res = PyDict_Contains( tmp_dict_name_31, tmp_key_name_31 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_31;
    }
    tmp_cond_value_31 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_31 = CHECK_IF_TRUE( tmp_cond_value_31 );
    if ( tmp_cond_truth_31 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_31;
    }
    if ( tmp_cond_truth_31 == 1 )
    {
        goto condexpr_true_31;
    }
    else
    {
        goto condexpr_false_31;
    }
    condexpr_true_31:;
    tmp_dict_name_32 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_32 );
    tmp_key_name_32 = const_str_plain_metaclass;
    tmp_metaclass_name_11 = DICT_GET_ITEM( tmp_dict_name_32, tmp_key_name_32 );
    if ( tmp_metaclass_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_31;
    }
    goto condexpr_end_31;
    condexpr_false_31:;
    tmp_cond_value_32 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_cond_value_32 );
    tmp_cond_truth_32 = CHECK_IF_TRUE( tmp_cond_value_32 );
    if ( tmp_cond_truth_32 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_31;
    }
    if ( tmp_cond_truth_32 == 1 )
    {
        goto condexpr_true_32;
    }
    else
    {
        goto condexpr_false_32;
    }
    condexpr_true_32:;
    tmp_subscribed_name_11 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_subscribed_name_11 );
    tmp_subscript_name_11 = const_int_0;
    tmp_type_arg_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_type_arg_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_31;
    }
    tmp_metaclass_name_11 = BUILTIN_TYPE1( tmp_type_arg_11 );
    Py_DECREF( tmp_type_arg_11 );
    if ( tmp_metaclass_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_31;
    }
    goto condexpr_end_32;
    condexpr_false_32:;
    tmp_metaclass_name_11 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_11 );
    condexpr_end_32:;
    condexpr_end_31:;
    tmp_bases_name_11 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_bases_name_11 );
    tmp_assign_source_77 = SELECT_METACLASS( tmp_metaclass_name_11, tmp_bases_name_11 );
    Py_DECREF( tmp_metaclass_name_11 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_31;
    }
    assert( tmp_class_creation_11__metaclass == NULL );
    tmp_class_creation_11__metaclass = tmp_assign_source_77;

    tmp_key_name_33 = const_str_plain_metaclass;
    tmp_dict_name_33 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_33 );
    tmp_res = PyDict_Contains( tmp_dict_name_33, tmp_key_name_33 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_31;
    }
    tmp_cond_value_33 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_33 = CHECK_IF_TRUE( tmp_cond_value_33 );
    if ( tmp_cond_truth_33 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_31;
    }
    if ( tmp_cond_truth_33 == 1 )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_dictdel_dict = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_31;
    }
    branch_no_21:;
    tmp_hasattr_source_11 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_11 );
    tmp_hasattr_attr_11 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_11, tmp_hasattr_attr_11 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_31;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_33;
    }
    else
    {
        goto condexpr_false_33;
    }
    condexpr_true_33:;
    tmp_source_name_11 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___prepare__ );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_31;
    }
    tmp_tuple_element_31 = const_str_plain_MissingSchema;
    tmp_args_name_21 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_args_name_21, 0, tmp_tuple_element_31 );
    tmp_tuple_element_31 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_tuple_element_31 );
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_args_name_21, 1, tmp_tuple_element_31 );
    tmp_kw_name_21 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_21 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 72;
    tmp_assign_source_78 = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_21, tmp_kw_name_21 );
    Py_DECREF( tmp_called_name_21 );
    Py_DECREF( tmp_args_name_21 );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_31;
    }
    goto condexpr_end_33;
    condexpr_false_33:;
    tmp_assign_source_78 = PyDict_New();
    condexpr_end_33:;
    assert( tmp_class_creation_11__prepared == NULL );
    tmp_class_creation_11__prepared = tmp_assign_source_78;

    tmp_set_locals = tmp_class_creation_11__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_72 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_72, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_33;
    }
    tmp_dictset_value = const_str_digest_c7a80113e8376f2f52f7ee120f1360d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_72, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_33;
    }
    tmp_dictset_value = const_str_plain_MissingSchema;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_72, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_33;
    }
    tmp_compare_left_11 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_compare_left_11 );
    tmp_compare_right_11 = tmp_class_creation_11__bases_orig;

    CHECK_OBJECT( tmp_compare_right_11 );
    tmp_cmp_NotEq_11 = RICH_COMPARE_BOOL_NE( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_NotEq_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_33;
    }
    if ( tmp_cmp_NotEq_11 == 1 )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_dictset_value = tmp_class_creation_11__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_72, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_33;
    }
    branch_no_22:;
    tmp_called_name_22 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_called_name_22 );
    tmp_tuple_element_32 = const_str_plain_MissingSchema;
    tmp_args_name_22 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_22, 0, tmp_tuple_element_32 );
    tmp_tuple_element_32 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_tuple_element_32 );
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_22, 1, tmp_tuple_element_32 );
    tmp_tuple_element_32 = locals_requests$exceptions_72;
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_22, 2, tmp_tuple_element_32 );
    tmp_kw_name_22 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_22 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 72;
    tmp_assign_source_80 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_22, tmp_kw_name_22 );
    Py_DECREF( tmp_args_name_22 );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_33;
    }
    assert( outline_10_var___class__ == NULL );
    outline_10_var___class__ = tmp_assign_source_80;

    tmp_outline_return_value_11 = outline_10_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_11 );
    Py_INCREF( tmp_outline_return_value_11 );
    goto try_return_handler_33;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_33:;
    Py_DECREF( locals_requests$exceptions_72 );
    locals_requests$exceptions_72 = NULL;
    goto try_return_handler_32;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_72 );
    locals_requests$exceptions_72 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto try_except_handler_32;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_32:;
    CHECK_OBJECT( (PyObject *)outline_10_var___class__ );
    Py_DECREF( outline_10_var___class__ );
    outline_10_var___class__ = NULL;

    goto outline_result_11;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto outline_exception_11;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_11:;
    exception_lineno = 72;
    goto try_except_handler_31;
    outline_result_11:;
    tmp_assign_source_79 = tmp_outline_return_value_11;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_MissingSchema, tmp_assign_source_79 );
    goto try_end_11;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_class_creation_11__class_decl_dict );
    tmp_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_11__prepared );
    tmp_class_creation_11__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__bases );
    Py_DECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class_decl_dict );
    Py_DECREF( tmp_class_creation_11__class_decl_dict );
    tmp_class_creation_11__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__metaclass );
    Py_DECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__prepared );
    Py_DECREF( tmp_class_creation_11__prepared );
    tmp_class_creation_11__prepared = NULL;

    // Tried code:
    tmp_tuple_element_33 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_33 == NULL ))
    {
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;

        goto try_except_handler_34;
    }

    tmp_assign_source_81 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_assign_source_81, 0, tmp_tuple_element_33 );
    tmp_tuple_element_33 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_assign_source_81, 1, tmp_tuple_element_33 );
    assert( tmp_class_creation_12__bases_orig == NULL );
    tmp_class_creation_12__bases_orig = tmp_assign_source_81;

    tmp_dircall_arg1_12 = tmp_class_creation_12__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_12 );
    Py_INCREF( tmp_dircall_arg1_12 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
        tmp_assign_source_82 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_34;
    }
    assert( tmp_class_creation_12__bases == NULL );
    tmp_class_creation_12__bases = tmp_assign_source_82;

    tmp_assign_source_83 = PyDict_New();
    assert( tmp_class_creation_12__class_decl_dict == NULL );
    tmp_class_creation_12__class_decl_dict = tmp_assign_source_83;

    tmp_key_name_34 = const_str_plain_metaclass;
    tmp_dict_name_34 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_34 );
    tmp_res = PyDict_Contains( tmp_dict_name_34, tmp_key_name_34 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_34;
    }
    tmp_cond_value_34 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_34 = CHECK_IF_TRUE( tmp_cond_value_34 );
    if ( tmp_cond_truth_34 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_34;
    }
    if ( tmp_cond_truth_34 == 1 )
    {
        goto condexpr_true_34;
    }
    else
    {
        goto condexpr_false_34;
    }
    condexpr_true_34:;
    tmp_dict_name_35 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_35 );
    tmp_key_name_35 = const_str_plain_metaclass;
    tmp_metaclass_name_12 = DICT_GET_ITEM( tmp_dict_name_35, tmp_key_name_35 );
    if ( tmp_metaclass_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_34;
    }
    goto condexpr_end_34;
    condexpr_false_34:;
    tmp_cond_value_35 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_cond_value_35 );
    tmp_cond_truth_35 = CHECK_IF_TRUE( tmp_cond_value_35 );
    if ( tmp_cond_truth_35 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_34;
    }
    if ( tmp_cond_truth_35 == 1 )
    {
        goto condexpr_true_35;
    }
    else
    {
        goto condexpr_false_35;
    }
    condexpr_true_35:;
    tmp_subscribed_name_12 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_subscribed_name_12 );
    tmp_subscript_name_12 = const_int_0;
    tmp_type_arg_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
    if ( tmp_type_arg_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_34;
    }
    tmp_metaclass_name_12 = BUILTIN_TYPE1( tmp_type_arg_12 );
    Py_DECREF( tmp_type_arg_12 );
    if ( tmp_metaclass_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_34;
    }
    goto condexpr_end_35;
    condexpr_false_35:;
    tmp_metaclass_name_12 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_12 );
    condexpr_end_35:;
    condexpr_end_34:;
    tmp_bases_name_12 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_bases_name_12 );
    tmp_assign_source_84 = SELECT_METACLASS( tmp_metaclass_name_12, tmp_bases_name_12 );
    Py_DECREF( tmp_metaclass_name_12 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_34;
    }
    assert( tmp_class_creation_12__metaclass == NULL );
    tmp_class_creation_12__metaclass = tmp_assign_source_84;

    tmp_key_name_36 = const_str_plain_metaclass;
    tmp_dict_name_36 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_36 );
    tmp_res = PyDict_Contains( tmp_dict_name_36, tmp_key_name_36 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_34;
    }
    tmp_cond_value_36 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_36 = CHECK_IF_TRUE( tmp_cond_value_36 );
    if ( tmp_cond_truth_36 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_34;
    }
    if ( tmp_cond_truth_36 == 1 )
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_dictdel_dict = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_34;
    }
    branch_no_23:;
    tmp_hasattr_source_12 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_12 );
    tmp_hasattr_attr_12 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_12, tmp_hasattr_attr_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_34;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_36;
    }
    else
    {
        goto condexpr_false_36;
    }
    condexpr_true_36:;
    tmp_source_name_12 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___prepare__ );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_34;
    }
    tmp_tuple_element_34 = const_str_plain_InvalidSchema;
    tmp_args_name_23 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_23, 0, tmp_tuple_element_34 );
    tmp_tuple_element_34 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_tuple_element_34 );
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_23, 1, tmp_tuple_element_34 );
    tmp_kw_name_23 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_23 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 76;
    tmp_assign_source_85 = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_23, tmp_kw_name_23 );
    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_args_name_23 );
    if ( tmp_assign_source_85 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_34;
    }
    goto condexpr_end_36;
    condexpr_false_36:;
    tmp_assign_source_85 = PyDict_New();
    condexpr_end_36:;
    assert( tmp_class_creation_12__prepared == NULL );
    tmp_class_creation_12__prepared = tmp_assign_source_85;

    tmp_set_locals = tmp_class_creation_12__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_76 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_76, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_36;
    }
    tmp_dictset_value = const_str_digest_0689849403be684eb33eb3512cfc2389;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_76, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_36;
    }
    tmp_dictset_value = const_str_plain_InvalidSchema;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_76, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_36;
    }
    tmp_compare_left_12 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_compare_left_12 );
    tmp_compare_right_12 = tmp_class_creation_12__bases_orig;

    CHECK_OBJECT( tmp_compare_right_12 );
    tmp_cmp_NotEq_12 = RICH_COMPARE_BOOL_NE( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_NotEq_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_36;
    }
    if ( tmp_cmp_NotEq_12 == 1 )
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    tmp_dictset_value = tmp_class_creation_12__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_76, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_36;
    }
    branch_no_24:;
    tmp_called_name_24 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_called_name_24 );
    tmp_tuple_element_35 = const_str_plain_InvalidSchema;
    tmp_args_name_24 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_args_name_24, 0, tmp_tuple_element_35 );
    tmp_tuple_element_35 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_tuple_element_35 );
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_args_name_24, 1, tmp_tuple_element_35 );
    tmp_tuple_element_35 = locals_requests$exceptions_76;
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_args_name_24, 2, tmp_tuple_element_35 );
    tmp_kw_name_24 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_24 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 76;
    tmp_assign_source_87 = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_24, tmp_kw_name_24 );
    Py_DECREF( tmp_args_name_24 );
    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_36;
    }
    assert( outline_11_var___class__ == NULL );
    outline_11_var___class__ = tmp_assign_source_87;

    tmp_outline_return_value_12 = outline_11_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_12 );
    Py_INCREF( tmp_outline_return_value_12 );
    goto try_return_handler_36;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_36:;
    Py_DECREF( locals_requests$exceptions_76 );
    locals_requests$exceptions_76 = NULL;
    goto try_return_handler_35;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_76 );
    locals_requests$exceptions_76 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto try_except_handler_35;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_35:;
    CHECK_OBJECT( (PyObject *)outline_11_var___class__ );
    Py_DECREF( outline_11_var___class__ );
    outline_11_var___class__ = NULL;

    goto outline_result_12;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto outline_exception_12;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_12:;
    exception_lineno = 76;
    goto try_except_handler_34;
    outline_result_12:;
    tmp_assign_source_86 = tmp_outline_return_value_12;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidSchema, tmp_assign_source_86 );
    goto try_end_12;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_class_creation_12__class_decl_dict );
    tmp_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_12__prepared );
    tmp_class_creation_12__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__bases );
    Py_DECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class_decl_dict );
    Py_DECREF( tmp_class_creation_12__class_decl_dict );
    tmp_class_creation_12__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__metaclass );
    Py_DECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__prepared );
    Py_DECREF( tmp_class_creation_12__prepared );
    tmp_class_creation_12__prepared = NULL;

    // Tried code:
    tmp_tuple_element_36 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_36 == NULL ))
    {
        tmp_tuple_element_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_36 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;

        goto try_except_handler_37;
    }

    tmp_assign_source_88 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_assign_source_88, 0, tmp_tuple_element_36 );
    tmp_tuple_element_36 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_assign_source_88, 1, tmp_tuple_element_36 );
    assert( tmp_class_creation_13__bases_orig == NULL );
    tmp_class_creation_13__bases_orig = tmp_assign_source_88;

    tmp_dircall_arg1_13 = tmp_class_creation_13__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_13 );
    Py_INCREF( tmp_dircall_arg1_13 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
        tmp_assign_source_89 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_37;
    }
    assert( tmp_class_creation_13__bases == NULL );
    tmp_class_creation_13__bases = tmp_assign_source_89;

    tmp_assign_source_90 = PyDict_New();
    assert( tmp_class_creation_13__class_decl_dict == NULL );
    tmp_class_creation_13__class_decl_dict = tmp_assign_source_90;

    tmp_key_name_37 = const_str_plain_metaclass;
    tmp_dict_name_37 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_37 );
    tmp_res = PyDict_Contains( tmp_dict_name_37, tmp_key_name_37 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_37;
    }
    tmp_cond_value_37 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_37 = CHECK_IF_TRUE( tmp_cond_value_37 );
    if ( tmp_cond_truth_37 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_37;
    }
    if ( tmp_cond_truth_37 == 1 )
    {
        goto condexpr_true_37;
    }
    else
    {
        goto condexpr_false_37;
    }
    condexpr_true_37:;
    tmp_dict_name_38 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_38 );
    tmp_key_name_38 = const_str_plain_metaclass;
    tmp_metaclass_name_13 = DICT_GET_ITEM( tmp_dict_name_38, tmp_key_name_38 );
    if ( tmp_metaclass_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_37;
    }
    goto condexpr_end_37;
    condexpr_false_37:;
    tmp_cond_value_38 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_cond_value_38 );
    tmp_cond_truth_38 = CHECK_IF_TRUE( tmp_cond_value_38 );
    if ( tmp_cond_truth_38 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_37;
    }
    if ( tmp_cond_truth_38 == 1 )
    {
        goto condexpr_true_38;
    }
    else
    {
        goto condexpr_false_38;
    }
    condexpr_true_38:;
    tmp_subscribed_name_13 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_subscribed_name_13 );
    tmp_subscript_name_13 = const_int_0;
    tmp_type_arg_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
    if ( tmp_type_arg_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_37;
    }
    tmp_metaclass_name_13 = BUILTIN_TYPE1( tmp_type_arg_13 );
    Py_DECREF( tmp_type_arg_13 );
    if ( tmp_metaclass_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_37;
    }
    goto condexpr_end_38;
    condexpr_false_38:;
    tmp_metaclass_name_13 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_13 );
    condexpr_end_38:;
    condexpr_end_37:;
    tmp_bases_name_13 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_bases_name_13 );
    tmp_assign_source_91 = SELECT_METACLASS( tmp_metaclass_name_13, tmp_bases_name_13 );
    Py_DECREF( tmp_metaclass_name_13 );
    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_37;
    }
    assert( tmp_class_creation_13__metaclass == NULL );
    tmp_class_creation_13__metaclass = tmp_assign_source_91;

    tmp_key_name_39 = const_str_plain_metaclass;
    tmp_dict_name_39 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_39 );
    tmp_res = PyDict_Contains( tmp_dict_name_39, tmp_key_name_39 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_37;
    }
    tmp_cond_value_39 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_39 = CHECK_IF_TRUE( tmp_cond_value_39 );
    if ( tmp_cond_truth_39 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_37;
    }
    if ( tmp_cond_truth_39 == 1 )
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    tmp_dictdel_dict = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_37;
    }
    branch_no_25:;
    tmp_hasattr_source_13 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_13 );
    tmp_hasattr_attr_13 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_13, tmp_hasattr_attr_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_37;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_39;
    }
    else
    {
        goto condexpr_false_39;
    }
    condexpr_true_39:;
    tmp_source_name_13 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___prepare__ );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_37;
    }
    tmp_tuple_element_37 = const_str_plain_InvalidURL;
    tmp_args_name_25 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_args_name_25, 0, tmp_tuple_element_37 );
    tmp_tuple_element_37 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_tuple_element_37 );
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_args_name_25, 1, tmp_tuple_element_37 );
    tmp_kw_name_25 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_25 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 80;
    tmp_assign_source_92 = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_25, tmp_kw_name_25 );
    Py_DECREF( tmp_called_name_25 );
    Py_DECREF( tmp_args_name_25 );
    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_37;
    }
    goto condexpr_end_39;
    condexpr_false_39:;
    tmp_assign_source_92 = PyDict_New();
    condexpr_end_39:;
    assert( tmp_class_creation_13__prepared == NULL );
    tmp_class_creation_13__prepared = tmp_assign_source_92;

    tmp_set_locals = tmp_class_creation_13__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_80 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_80, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_39;
    }
    tmp_dictset_value = const_str_digest_225332b778bf59fe5fff32593da4030a;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_80, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_39;
    }
    tmp_dictset_value = const_str_plain_InvalidURL;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_80, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_39;
    }
    tmp_compare_left_13 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_compare_left_13 );
    tmp_compare_right_13 = tmp_class_creation_13__bases_orig;

    CHECK_OBJECT( tmp_compare_right_13 );
    tmp_cmp_NotEq_13 = RICH_COMPARE_BOOL_NE( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_cmp_NotEq_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_39;
    }
    if ( tmp_cmp_NotEq_13 == 1 )
    {
        goto branch_yes_26;
    }
    else
    {
        goto branch_no_26;
    }
    branch_yes_26:;
    tmp_dictset_value = tmp_class_creation_13__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_80, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_39;
    }
    branch_no_26:;
    tmp_called_name_26 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_called_name_26 );
    tmp_tuple_element_38 = const_str_plain_InvalidURL;
    tmp_args_name_26 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_args_name_26, 0, tmp_tuple_element_38 );
    tmp_tuple_element_38 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_tuple_element_38 );
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_args_name_26, 1, tmp_tuple_element_38 );
    tmp_tuple_element_38 = locals_requests$exceptions_80;
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_args_name_26, 2, tmp_tuple_element_38 );
    tmp_kw_name_26 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_26 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 80;
    tmp_assign_source_94 = CALL_FUNCTION( tmp_called_name_26, tmp_args_name_26, tmp_kw_name_26 );
    Py_DECREF( tmp_args_name_26 );
    if ( tmp_assign_source_94 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_39;
    }
    assert( outline_12_var___class__ == NULL );
    outline_12_var___class__ = tmp_assign_source_94;

    tmp_outline_return_value_13 = outline_12_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_13 );
    Py_INCREF( tmp_outline_return_value_13 );
    goto try_return_handler_39;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_39:;
    Py_DECREF( locals_requests$exceptions_80 );
    locals_requests$exceptions_80 = NULL;
    goto try_return_handler_38;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_80 );
    locals_requests$exceptions_80 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto try_except_handler_38;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_38:;
    CHECK_OBJECT( (PyObject *)outline_12_var___class__ );
    Py_DECREF( outline_12_var___class__ );
    outline_12_var___class__ = NULL;

    goto outline_result_13;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto outline_exception_13;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_13:;
    exception_lineno = 80;
    goto try_except_handler_37;
    outline_result_13:;
    tmp_assign_source_93 = tmp_outline_return_value_13;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidURL, tmp_assign_source_93 );
    goto try_end_13;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_class_creation_13__class_decl_dict );
    tmp_class_creation_13__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_13__prepared );
    tmp_class_creation_13__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__bases );
    Py_DECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class_decl_dict );
    Py_DECREF( tmp_class_creation_13__class_decl_dict );
    tmp_class_creation_13__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__metaclass );
    Py_DECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__prepared );
    Py_DECREF( tmp_class_creation_13__prepared );
    tmp_class_creation_13__prepared = NULL;

    // Tried code:
    tmp_tuple_element_39 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_39 == NULL ))
    {
        tmp_tuple_element_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_39 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;

        goto try_except_handler_40;
    }

    tmp_assign_source_95 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_assign_source_95, 0, tmp_tuple_element_39 );
    tmp_tuple_element_39 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_assign_source_95, 1, tmp_tuple_element_39 );
    assert( tmp_class_creation_14__bases_orig == NULL );
    tmp_class_creation_14__bases_orig = tmp_assign_source_95;

    tmp_dircall_arg1_14 = tmp_class_creation_14__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_14 );
    Py_INCREF( tmp_dircall_arg1_14 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
        tmp_assign_source_96 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_96 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    assert( tmp_class_creation_14__bases == NULL );
    tmp_class_creation_14__bases = tmp_assign_source_96;

    tmp_assign_source_97 = PyDict_New();
    assert( tmp_class_creation_14__class_decl_dict == NULL );
    tmp_class_creation_14__class_decl_dict = tmp_assign_source_97;

    tmp_key_name_40 = const_str_plain_metaclass;
    tmp_dict_name_40 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_40 );
    tmp_res = PyDict_Contains( tmp_dict_name_40, tmp_key_name_40 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    tmp_cond_value_40 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_40 = CHECK_IF_TRUE( tmp_cond_value_40 );
    if ( tmp_cond_truth_40 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    if ( tmp_cond_truth_40 == 1 )
    {
        goto condexpr_true_40;
    }
    else
    {
        goto condexpr_false_40;
    }
    condexpr_true_40:;
    tmp_dict_name_41 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_41 );
    tmp_key_name_41 = const_str_plain_metaclass;
    tmp_metaclass_name_14 = DICT_GET_ITEM( tmp_dict_name_41, tmp_key_name_41 );
    if ( tmp_metaclass_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    goto condexpr_end_40;
    condexpr_false_40:;
    tmp_cond_value_41 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_cond_value_41 );
    tmp_cond_truth_41 = CHECK_IF_TRUE( tmp_cond_value_41 );
    if ( tmp_cond_truth_41 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    if ( tmp_cond_truth_41 == 1 )
    {
        goto condexpr_true_41;
    }
    else
    {
        goto condexpr_false_41;
    }
    condexpr_true_41:;
    tmp_subscribed_name_14 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_subscribed_name_14 );
    tmp_subscript_name_14 = const_int_0;
    tmp_type_arg_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
    if ( tmp_type_arg_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    tmp_metaclass_name_14 = BUILTIN_TYPE1( tmp_type_arg_14 );
    Py_DECREF( tmp_type_arg_14 );
    if ( tmp_metaclass_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    goto condexpr_end_41;
    condexpr_false_41:;
    tmp_metaclass_name_14 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_14 );
    condexpr_end_41:;
    condexpr_end_40:;
    tmp_bases_name_14 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_bases_name_14 );
    tmp_assign_source_98 = SELECT_METACLASS( tmp_metaclass_name_14, tmp_bases_name_14 );
    Py_DECREF( tmp_metaclass_name_14 );
    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    assert( tmp_class_creation_14__metaclass == NULL );
    tmp_class_creation_14__metaclass = tmp_assign_source_98;

    tmp_key_name_42 = const_str_plain_metaclass;
    tmp_dict_name_42 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_42 );
    tmp_res = PyDict_Contains( tmp_dict_name_42, tmp_key_name_42 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    tmp_cond_value_42 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_42 = CHECK_IF_TRUE( tmp_cond_value_42 );
    if ( tmp_cond_truth_42 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    if ( tmp_cond_truth_42 == 1 )
    {
        goto branch_yes_27;
    }
    else
    {
        goto branch_no_27;
    }
    branch_yes_27:;
    tmp_dictdel_dict = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    branch_no_27:;
    tmp_hasattr_source_14 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_14 );
    tmp_hasattr_attr_14 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_14, tmp_hasattr_attr_14 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_42;
    }
    else
    {
        goto condexpr_false_42;
    }
    condexpr_true_42:;
    tmp_source_name_14 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    tmp_tuple_element_40 = const_str_plain_InvalidHeader;
    tmp_args_name_27 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_args_name_27, 0, tmp_tuple_element_40 );
    tmp_tuple_element_40 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_tuple_element_40 );
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_args_name_27, 1, tmp_tuple_element_40 );
    tmp_kw_name_27 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_27 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 84;
    tmp_assign_source_99 = CALL_FUNCTION( tmp_called_name_27, tmp_args_name_27, tmp_kw_name_27 );
    Py_DECREF( tmp_called_name_27 );
    Py_DECREF( tmp_args_name_27 );
    if ( tmp_assign_source_99 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    goto condexpr_end_42;
    condexpr_false_42:;
    tmp_assign_source_99 = PyDict_New();
    condexpr_end_42:;
    assert( tmp_class_creation_14__prepared == NULL );
    tmp_class_creation_14__prepared = tmp_assign_source_99;

    tmp_set_locals = tmp_class_creation_14__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_84 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_84, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_42;
    }
    tmp_dictset_value = const_str_digest_4aae44da769befc767278be58ddca255;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_84, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_42;
    }
    tmp_dictset_value = const_str_plain_InvalidHeader;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_84, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_42;
    }
    tmp_compare_left_14 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_compare_left_14 );
    tmp_compare_right_14 = tmp_class_creation_14__bases_orig;

    CHECK_OBJECT( tmp_compare_right_14 );
    tmp_cmp_NotEq_14 = RICH_COMPARE_BOOL_NE( tmp_compare_left_14, tmp_compare_right_14 );
    if ( tmp_cmp_NotEq_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_42;
    }
    if ( tmp_cmp_NotEq_14 == 1 )
    {
        goto branch_yes_28;
    }
    else
    {
        goto branch_no_28;
    }
    branch_yes_28:;
    tmp_dictset_value = tmp_class_creation_14__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_84, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_42;
    }
    branch_no_28:;
    tmp_called_name_28 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_called_name_28 );
    tmp_tuple_element_41 = const_str_plain_InvalidHeader;
    tmp_args_name_28 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_args_name_28, 0, tmp_tuple_element_41 );
    tmp_tuple_element_41 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_tuple_element_41 );
    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_args_name_28, 1, tmp_tuple_element_41 );
    tmp_tuple_element_41 = locals_requests$exceptions_84;
    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_args_name_28, 2, tmp_tuple_element_41 );
    tmp_kw_name_28 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_28 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 84;
    tmp_assign_source_101 = CALL_FUNCTION( tmp_called_name_28, tmp_args_name_28, tmp_kw_name_28 );
    Py_DECREF( tmp_args_name_28 );
    if ( tmp_assign_source_101 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_42;
    }
    assert( outline_13_var___class__ == NULL );
    outline_13_var___class__ = tmp_assign_source_101;

    tmp_outline_return_value_14 = outline_13_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_14 );
    Py_INCREF( tmp_outline_return_value_14 );
    goto try_return_handler_42;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_42:;
    Py_DECREF( locals_requests$exceptions_84 );
    locals_requests$exceptions_84 = NULL;
    goto try_return_handler_41;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_84 );
    locals_requests$exceptions_84 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto try_except_handler_41;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_41:;
    CHECK_OBJECT( (PyObject *)outline_13_var___class__ );
    Py_DECREF( outline_13_var___class__ );
    outline_13_var___class__ = NULL;

    goto outline_result_14;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto outline_exception_14;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_14:;
    exception_lineno = 84;
    goto try_except_handler_40;
    outline_result_14:;
    tmp_assign_source_100 = tmp_outline_return_value_14;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidHeader, tmp_assign_source_100 );
    goto try_end_14;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    Py_XDECREF( tmp_class_creation_14__class_decl_dict );
    tmp_class_creation_14__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_14__prepared );
    tmp_class_creation_14__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__bases );
    Py_DECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__class_decl_dict );
    Py_DECREF( tmp_class_creation_14__class_decl_dict );
    tmp_class_creation_14__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__metaclass );
    Py_DECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__prepared );
    Py_DECREF( tmp_class_creation_14__prepared );
    tmp_class_creation_14__prepared = NULL;

    // Tried code:
    tmp_tuple_element_42 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidURL );

    if (unlikely( tmp_tuple_element_42 == NULL ))
    {
        tmp_tuple_element_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidURL );
    }

    if ( tmp_tuple_element_42 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InvalidURL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;

        goto try_except_handler_43;
    }

    tmp_assign_source_102 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_42 );
    PyTuple_SET_ITEM( tmp_assign_source_102, 0, tmp_tuple_element_42 );
    assert( tmp_class_creation_15__bases_orig == NULL );
    tmp_class_creation_15__bases_orig = tmp_assign_source_102;

    tmp_dircall_arg1_15 = tmp_class_creation_15__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_15 );
    Py_INCREF( tmp_dircall_arg1_15 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_15};
        tmp_assign_source_103 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_103 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_43;
    }
    assert( tmp_class_creation_15__bases == NULL );
    tmp_class_creation_15__bases = tmp_assign_source_103;

    tmp_assign_source_104 = PyDict_New();
    assert( tmp_class_creation_15__class_decl_dict == NULL );
    tmp_class_creation_15__class_decl_dict = tmp_assign_source_104;

    tmp_key_name_43 = const_str_plain_metaclass;
    tmp_dict_name_43 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_43 );
    tmp_res = PyDict_Contains( tmp_dict_name_43, tmp_key_name_43 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_43;
    }
    tmp_cond_value_43 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_43 = CHECK_IF_TRUE( tmp_cond_value_43 );
    if ( tmp_cond_truth_43 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_43;
    }
    if ( tmp_cond_truth_43 == 1 )
    {
        goto condexpr_true_43;
    }
    else
    {
        goto condexpr_false_43;
    }
    condexpr_true_43:;
    tmp_dict_name_44 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_44 );
    tmp_key_name_44 = const_str_plain_metaclass;
    tmp_metaclass_name_15 = DICT_GET_ITEM( tmp_dict_name_44, tmp_key_name_44 );
    if ( tmp_metaclass_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_43;
    }
    goto condexpr_end_43;
    condexpr_false_43:;
    tmp_cond_value_44 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_cond_value_44 );
    tmp_cond_truth_44 = CHECK_IF_TRUE( tmp_cond_value_44 );
    if ( tmp_cond_truth_44 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_43;
    }
    if ( tmp_cond_truth_44 == 1 )
    {
        goto condexpr_true_44;
    }
    else
    {
        goto condexpr_false_44;
    }
    condexpr_true_44:;
    tmp_subscribed_name_15 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_subscribed_name_15 );
    tmp_subscript_name_15 = const_int_0;
    tmp_type_arg_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
    if ( tmp_type_arg_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_43;
    }
    tmp_metaclass_name_15 = BUILTIN_TYPE1( tmp_type_arg_15 );
    Py_DECREF( tmp_type_arg_15 );
    if ( tmp_metaclass_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_43;
    }
    goto condexpr_end_44;
    condexpr_false_44:;
    tmp_metaclass_name_15 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_15 );
    condexpr_end_44:;
    condexpr_end_43:;
    tmp_bases_name_15 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_bases_name_15 );
    tmp_assign_source_105 = SELECT_METACLASS( tmp_metaclass_name_15, tmp_bases_name_15 );
    Py_DECREF( tmp_metaclass_name_15 );
    if ( tmp_assign_source_105 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_43;
    }
    assert( tmp_class_creation_15__metaclass == NULL );
    tmp_class_creation_15__metaclass = tmp_assign_source_105;

    tmp_key_name_45 = const_str_plain_metaclass;
    tmp_dict_name_45 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_45 );
    tmp_res = PyDict_Contains( tmp_dict_name_45, tmp_key_name_45 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_43;
    }
    tmp_cond_value_45 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_45 = CHECK_IF_TRUE( tmp_cond_value_45 );
    if ( tmp_cond_truth_45 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_43;
    }
    if ( tmp_cond_truth_45 == 1 )
    {
        goto branch_yes_29;
    }
    else
    {
        goto branch_no_29;
    }
    branch_yes_29:;
    tmp_dictdel_dict = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_43;
    }
    branch_no_29:;
    tmp_hasattr_source_15 = tmp_class_creation_15__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_15 );
    tmp_hasattr_attr_15 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_15, tmp_hasattr_attr_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_43;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_45;
    }
    else
    {
        goto condexpr_false_45;
    }
    condexpr_true_45:;
    tmp_source_name_15 = tmp_class_creation_15__metaclass;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain___prepare__ );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_43;
    }
    tmp_tuple_element_43 = const_str_plain_InvalidProxyURL;
    tmp_args_name_29 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_args_name_29, 0, tmp_tuple_element_43 );
    tmp_tuple_element_43 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_tuple_element_43 );
    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_args_name_29, 1, tmp_tuple_element_43 );
    tmp_kw_name_29 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_29 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 88;
    tmp_assign_source_106 = CALL_FUNCTION( tmp_called_name_29, tmp_args_name_29, tmp_kw_name_29 );
    Py_DECREF( tmp_called_name_29 );
    Py_DECREF( tmp_args_name_29 );
    if ( tmp_assign_source_106 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_43;
    }
    goto condexpr_end_45;
    condexpr_false_45:;
    tmp_assign_source_106 = PyDict_New();
    condexpr_end_45:;
    assert( tmp_class_creation_15__prepared == NULL );
    tmp_class_creation_15__prepared = tmp_assign_source_106;

    tmp_set_locals = tmp_class_creation_15__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_88 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_88, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_45;
    }
    tmp_dictset_value = const_str_digest_3b2add8be5d440c36ae0b41135415fa9;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_88, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_45;
    }
    tmp_dictset_value = const_str_plain_InvalidProxyURL;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_88, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_45;
    }
    tmp_compare_left_15 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_compare_left_15 );
    tmp_compare_right_15 = tmp_class_creation_15__bases_orig;

    CHECK_OBJECT( tmp_compare_right_15 );
    tmp_cmp_NotEq_15 = RICH_COMPARE_BOOL_NE( tmp_compare_left_15, tmp_compare_right_15 );
    if ( tmp_cmp_NotEq_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_45;
    }
    if ( tmp_cmp_NotEq_15 == 1 )
    {
        goto branch_yes_30;
    }
    else
    {
        goto branch_no_30;
    }
    branch_yes_30:;
    tmp_dictset_value = tmp_class_creation_15__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_88, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_45;
    }
    branch_no_30:;
    tmp_called_name_30 = tmp_class_creation_15__metaclass;

    CHECK_OBJECT( tmp_called_name_30 );
    tmp_tuple_element_44 = const_str_plain_InvalidProxyURL;
    tmp_args_name_30 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_args_name_30, 0, tmp_tuple_element_44 );
    tmp_tuple_element_44 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_tuple_element_44 );
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_args_name_30, 1, tmp_tuple_element_44 );
    tmp_tuple_element_44 = locals_requests$exceptions_88;
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_args_name_30, 2, tmp_tuple_element_44 );
    tmp_kw_name_30 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_30 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 88;
    tmp_assign_source_108 = CALL_FUNCTION( tmp_called_name_30, tmp_args_name_30, tmp_kw_name_30 );
    Py_DECREF( tmp_args_name_30 );
    if ( tmp_assign_source_108 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_45;
    }
    assert( outline_14_var___class__ == NULL );
    outline_14_var___class__ = tmp_assign_source_108;

    tmp_outline_return_value_15 = outline_14_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_15 );
    Py_INCREF( tmp_outline_return_value_15 );
    goto try_return_handler_45;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_45:;
    Py_DECREF( locals_requests$exceptions_88 );
    locals_requests$exceptions_88 = NULL;
    goto try_return_handler_44;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_88 );
    locals_requests$exceptions_88 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto try_except_handler_44;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_44:;
    CHECK_OBJECT( (PyObject *)outline_14_var___class__ );
    Py_DECREF( outline_14_var___class__ );
    outline_14_var___class__ = NULL;

    goto outline_result_15;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto outline_exception_15;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_15:;
    exception_lineno = 88;
    goto try_except_handler_43;
    outline_result_15:;
    tmp_assign_source_107 = tmp_outline_return_value_15;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidProxyURL, tmp_assign_source_107 );
    goto try_end_15;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    Py_XDECREF( tmp_class_creation_15__class_decl_dict );
    tmp_class_creation_15__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_15__prepared );
    tmp_class_creation_15__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__bases );
    Py_DECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__class_decl_dict );
    Py_DECREF( tmp_class_creation_15__class_decl_dict );
    tmp_class_creation_15__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__metaclass );
    Py_DECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__prepared );
    Py_DECREF( tmp_class_creation_15__prepared );
    tmp_class_creation_15__prepared = NULL;

    // Tried code:
    tmp_tuple_element_45 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_45 == NULL ))
    {
        tmp_tuple_element_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_45 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;

        goto try_except_handler_46;
    }

    tmp_assign_source_109 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_45 );
    PyTuple_SET_ITEM( tmp_assign_source_109, 0, tmp_tuple_element_45 );
    assert( tmp_class_creation_16__bases_orig == NULL );
    tmp_class_creation_16__bases_orig = tmp_assign_source_109;

    tmp_dircall_arg1_16 = tmp_class_creation_16__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_16 );
    Py_INCREF( tmp_dircall_arg1_16 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_16};
        tmp_assign_source_110 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_110 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_46;
    }
    assert( tmp_class_creation_16__bases == NULL );
    tmp_class_creation_16__bases = tmp_assign_source_110;

    tmp_assign_source_111 = PyDict_New();
    assert( tmp_class_creation_16__class_decl_dict == NULL );
    tmp_class_creation_16__class_decl_dict = tmp_assign_source_111;

    tmp_key_name_46 = const_str_plain_metaclass;
    tmp_dict_name_46 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_46 );
    tmp_res = PyDict_Contains( tmp_dict_name_46, tmp_key_name_46 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_46;
    }
    tmp_cond_value_46 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_46 = CHECK_IF_TRUE( tmp_cond_value_46 );
    if ( tmp_cond_truth_46 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_46;
    }
    if ( tmp_cond_truth_46 == 1 )
    {
        goto condexpr_true_46;
    }
    else
    {
        goto condexpr_false_46;
    }
    condexpr_true_46:;
    tmp_dict_name_47 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_47 );
    tmp_key_name_47 = const_str_plain_metaclass;
    tmp_metaclass_name_16 = DICT_GET_ITEM( tmp_dict_name_47, tmp_key_name_47 );
    if ( tmp_metaclass_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_46;
    }
    goto condexpr_end_46;
    condexpr_false_46:;
    tmp_cond_value_47 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_cond_value_47 );
    tmp_cond_truth_47 = CHECK_IF_TRUE( tmp_cond_value_47 );
    if ( tmp_cond_truth_47 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_46;
    }
    if ( tmp_cond_truth_47 == 1 )
    {
        goto condexpr_true_47;
    }
    else
    {
        goto condexpr_false_47;
    }
    condexpr_true_47:;
    tmp_subscribed_name_16 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_subscribed_name_16 );
    tmp_subscript_name_16 = const_int_0;
    tmp_type_arg_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
    if ( tmp_type_arg_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_46;
    }
    tmp_metaclass_name_16 = BUILTIN_TYPE1( tmp_type_arg_16 );
    Py_DECREF( tmp_type_arg_16 );
    if ( tmp_metaclass_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_46;
    }
    goto condexpr_end_47;
    condexpr_false_47:;
    tmp_metaclass_name_16 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_16 );
    condexpr_end_47:;
    condexpr_end_46:;
    tmp_bases_name_16 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_bases_name_16 );
    tmp_assign_source_112 = SELECT_METACLASS( tmp_metaclass_name_16, tmp_bases_name_16 );
    Py_DECREF( tmp_metaclass_name_16 );
    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_46;
    }
    assert( tmp_class_creation_16__metaclass == NULL );
    tmp_class_creation_16__metaclass = tmp_assign_source_112;

    tmp_key_name_48 = const_str_plain_metaclass;
    tmp_dict_name_48 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_48 );
    tmp_res = PyDict_Contains( tmp_dict_name_48, tmp_key_name_48 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_46;
    }
    tmp_cond_value_48 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_48 = CHECK_IF_TRUE( tmp_cond_value_48 );
    if ( tmp_cond_truth_48 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_46;
    }
    if ( tmp_cond_truth_48 == 1 )
    {
        goto branch_yes_31;
    }
    else
    {
        goto branch_no_31;
    }
    branch_yes_31:;
    tmp_dictdel_dict = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_46;
    }
    branch_no_31:;
    tmp_hasattr_source_16 = tmp_class_creation_16__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_16 );
    tmp_hasattr_attr_16 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_16, tmp_hasattr_attr_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_46;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_48;
    }
    else
    {
        goto condexpr_false_48;
    }
    condexpr_true_48:;
    tmp_source_name_16 = tmp_class_creation_16__metaclass;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_called_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___prepare__ );
    if ( tmp_called_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_46;
    }
    tmp_tuple_element_46 = const_str_plain_ChunkedEncodingError;
    tmp_args_name_31 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_args_name_31, 0, tmp_tuple_element_46 );
    tmp_tuple_element_46 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_tuple_element_46 );
    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_args_name_31, 1, tmp_tuple_element_46 );
    tmp_kw_name_31 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_31 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 92;
    tmp_assign_source_113 = CALL_FUNCTION( tmp_called_name_31, tmp_args_name_31, tmp_kw_name_31 );
    Py_DECREF( tmp_called_name_31 );
    Py_DECREF( tmp_args_name_31 );
    if ( tmp_assign_source_113 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_46;
    }
    goto condexpr_end_48;
    condexpr_false_48:;
    tmp_assign_source_113 = PyDict_New();
    condexpr_end_48:;
    assert( tmp_class_creation_16__prepared == NULL );
    tmp_class_creation_16__prepared = tmp_assign_source_113;

    tmp_set_locals = tmp_class_creation_16__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_92 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_92, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_48;
    }
    tmp_dictset_value = const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_92, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_48;
    }
    tmp_dictset_value = const_str_plain_ChunkedEncodingError;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_92, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_48;
    }
    tmp_compare_left_16 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_compare_left_16 );
    tmp_compare_right_16 = tmp_class_creation_16__bases_orig;

    CHECK_OBJECT( tmp_compare_right_16 );
    tmp_cmp_NotEq_16 = RICH_COMPARE_BOOL_NE( tmp_compare_left_16, tmp_compare_right_16 );
    if ( tmp_cmp_NotEq_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_48;
    }
    if ( tmp_cmp_NotEq_16 == 1 )
    {
        goto branch_yes_32;
    }
    else
    {
        goto branch_no_32;
    }
    branch_yes_32:;
    tmp_dictset_value = tmp_class_creation_16__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_92, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_48;
    }
    branch_no_32:;
    tmp_called_name_32 = tmp_class_creation_16__metaclass;

    CHECK_OBJECT( tmp_called_name_32 );
    tmp_tuple_element_47 = const_str_plain_ChunkedEncodingError;
    tmp_args_name_32 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_args_name_32, 0, tmp_tuple_element_47 );
    tmp_tuple_element_47 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_tuple_element_47 );
    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_args_name_32, 1, tmp_tuple_element_47 );
    tmp_tuple_element_47 = locals_requests$exceptions_92;
    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_args_name_32, 2, tmp_tuple_element_47 );
    tmp_kw_name_32 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_32 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 92;
    tmp_assign_source_115 = CALL_FUNCTION( tmp_called_name_32, tmp_args_name_32, tmp_kw_name_32 );
    Py_DECREF( tmp_args_name_32 );
    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_48;
    }
    assert( outline_15_var___class__ == NULL );
    outline_15_var___class__ = tmp_assign_source_115;

    tmp_outline_return_value_16 = outline_15_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_16 );
    Py_INCREF( tmp_outline_return_value_16 );
    goto try_return_handler_48;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_48:;
    Py_DECREF( locals_requests$exceptions_92 );
    locals_requests$exceptions_92 = NULL;
    goto try_return_handler_47;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_92 );
    locals_requests$exceptions_92 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_46;
    exception_value = exception_keeper_value_46;
    exception_tb = exception_keeper_tb_46;
    exception_lineno = exception_keeper_lineno_46;

    goto try_except_handler_47;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_47:;
    CHECK_OBJECT( (PyObject *)outline_15_var___class__ );
    Py_DECREF( outline_15_var___class__ );
    outline_15_var___class__ = NULL;

    goto outline_result_16;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto outline_exception_16;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_16:;
    exception_lineno = 92;
    goto try_except_handler_46;
    outline_result_16:;
    tmp_assign_source_114 = tmp_outline_return_value_16;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ChunkedEncodingError, tmp_assign_source_114 );
    goto try_end_16;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    Py_XDECREF( tmp_class_creation_16__class_decl_dict );
    tmp_class_creation_16__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_16__prepared );
    tmp_class_creation_16__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__bases );
    Py_DECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__class_decl_dict );
    Py_DECREF( tmp_class_creation_16__class_decl_dict );
    tmp_class_creation_16__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__metaclass );
    Py_DECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__prepared );
    Py_DECREF( tmp_class_creation_16__prepared );
    tmp_class_creation_16__prepared = NULL;

    // Tried code:
    tmp_tuple_element_48 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_48 == NULL ))
    {
        tmp_tuple_element_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_48 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;

        goto try_except_handler_49;
    }

    tmp_assign_source_116 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_48 );
    PyTuple_SET_ITEM( tmp_assign_source_116, 0, tmp_tuple_element_48 );
    tmp_tuple_element_48 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_BaseHTTPError );

    if (unlikely( tmp_tuple_element_48 == NULL ))
    {
        tmp_tuple_element_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseHTTPError );
    }

    if ( tmp_tuple_element_48 == NULL )
    {
        Py_DECREF( tmp_assign_source_116 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BaseHTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;

        goto try_except_handler_49;
    }

    Py_INCREF( tmp_tuple_element_48 );
    PyTuple_SET_ITEM( tmp_assign_source_116, 1, tmp_tuple_element_48 );
    assert( tmp_class_creation_17__bases_orig == NULL );
    tmp_class_creation_17__bases_orig = tmp_assign_source_116;

    tmp_dircall_arg1_17 = tmp_class_creation_17__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_17 );
    Py_INCREF( tmp_dircall_arg1_17 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_17};
        tmp_assign_source_117 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_117 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_49;
    }
    assert( tmp_class_creation_17__bases == NULL );
    tmp_class_creation_17__bases = tmp_assign_source_117;

    tmp_assign_source_118 = PyDict_New();
    assert( tmp_class_creation_17__class_decl_dict == NULL );
    tmp_class_creation_17__class_decl_dict = tmp_assign_source_118;

    tmp_key_name_49 = const_str_plain_metaclass;
    tmp_dict_name_49 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_49 );
    tmp_res = PyDict_Contains( tmp_dict_name_49, tmp_key_name_49 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_49;
    }
    tmp_cond_value_49 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_49 = CHECK_IF_TRUE( tmp_cond_value_49 );
    if ( tmp_cond_truth_49 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_49;
    }
    if ( tmp_cond_truth_49 == 1 )
    {
        goto condexpr_true_49;
    }
    else
    {
        goto condexpr_false_49;
    }
    condexpr_true_49:;
    tmp_dict_name_50 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_50 );
    tmp_key_name_50 = const_str_plain_metaclass;
    tmp_metaclass_name_17 = DICT_GET_ITEM( tmp_dict_name_50, tmp_key_name_50 );
    if ( tmp_metaclass_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_49;
    }
    goto condexpr_end_49;
    condexpr_false_49:;
    tmp_cond_value_50 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_cond_value_50 );
    tmp_cond_truth_50 = CHECK_IF_TRUE( tmp_cond_value_50 );
    if ( tmp_cond_truth_50 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_49;
    }
    if ( tmp_cond_truth_50 == 1 )
    {
        goto condexpr_true_50;
    }
    else
    {
        goto condexpr_false_50;
    }
    condexpr_true_50:;
    tmp_subscribed_name_17 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_subscribed_name_17 );
    tmp_subscript_name_17 = const_int_0;
    tmp_type_arg_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
    if ( tmp_type_arg_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_49;
    }
    tmp_metaclass_name_17 = BUILTIN_TYPE1( tmp_type_arg_17 );
    Py_DECREF( tmp_type_arg_17 );
    if ( tmp_metaclass_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_49;
    }
    goto condexpr_end_50;
    condexpr_false_50:;
    tmp_metaclass_name_17 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_17 );
    condexpr_end_50:;
    condexpr_end_49:;
    tmp_bases_name_17 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_bases_name_17 );
    tmp_assign_source_119 = SELECT_METACLASS( tmp_metaclass_name_17, tmp_bases_name_17 );
    Py_DECREF( tmp_metaclass_name_17 );
    if ( tmp_assign_source_119 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_49;
    }
    assert( tmp_class_creation_17__metaclass == NULL );
    tmp_class_creation_17__metaclass = tmp_assign_source_119;

    tmp_key_name_51 = const_str_plain_metaclass;
    tmp_dict_name_51 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_51 );
    tmp_res = PyDict_Contains( tmp_dict_name_51, tmp_key_name_51 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_49;
    }
    tmp_cond_value_51 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_51 = CHECK_IF_TRUE( tmp_cond_value_51 );
    if ( tmp_cond_truth_51 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_49;
    }
    if ( tmp_cond_truth_51 == 1 )
    {
        goto branch_yes_33;
    }
    else
    {
        goto branch_no_33;
    }
    branch_yes_33:;
    tmp_dictdel_dict = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_49;
    }
    branch_no_33:;
    tmp_hasattr_source_17 = tmp_class_creation_17__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_17 );
    tmp_hasattr_attr_17 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_17, tmp_hasattr_attr_17 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_49;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_51;
    }
    else
    {
        goto condexpr_false_51;
    }
    condexpr_true_51:;
    tmp_source_name_17 = tmp_class_creation_17__metaclass;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain___prepare__ );
    if ( tmp_called_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_49;
    }
    tmp_tuple_element_49 = const_str_plain_ContentDecodingError;
    tmp_args_name_33 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_args_name_33, 0, tmp_tuple_element_49 );
    tmp_tuple_element_49 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_tuple_element_49 );
    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_args_name_33, 1, tmp_tuple_element_49 );
    tmp_kw_name_33 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_33 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 96;
    tmp_assign_source_120 = CALL_FUNCTION( tmp_called_name_33, tmp_args_name_33, tmp_kw_name_33 );
    Py_DECREF( tmp_called_name_33 );
    Py_DECREF( tmp_args_name_33 );
    if ( tmp_assign_source_120 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_49;
    }
    goto condexpr_end_51;
    condexpr_false_51:;
    tmp_assign_source_120 = PyDict_New();
    condexpr_end_51:;
    assert( tmp_class_creation_17__prepared == NULL );
    tmp_class_creation_17__prepared = tmp_assign_source_120;

    tmp_set_locals = tmp_class_creation_17__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_96 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_96, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_51;
    }
    tmp_dictset_value = const_str_digest_e91f0a06d295e9fdd4c3972666eefa40;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_96, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_51;
    }
    tmp_dictset_value = const_str_plain_ContentDecodingError;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_96, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_51;
    }
    tmp_compare_left_17 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_compare_left_17 );
    tmp_compare_right_17 = tmp_class_creation_17__bases_orig;

    CHECK_OBJECT( tmp_compare_right_17 );
    tmp_cmp_NotEq_17 = RICH_COMPARE_BOOL_NE( tmp_compare_left_17, tmp_compare_right_17 );
    if ( tmp_cmp_NotEq_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_51;
    }
    if ( tmp_cmp_NotEq_17 == 1 )
    {
        goto branch_yes_34;
    }
    else
    {
        goto branch_no_34;
    }
    branch_yes_34:;
    tmp_dictset_value = tmp_class_creation_17__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_96, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_51;
    }
    branch_no_34:;
    tmp_called_name_34 = tmp_class_creation_17__metaclass;

    CHECK_OBJECT( tmp_called_name_34 );
    tmp_tuple_element_50 = const_str_plain_ContentDecodingError;
    tmp_args_name_34 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_args_name_34, 0, tmp_tuple_element_50 );
    tmp_tuple_element_50 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_tuple_element_50 );
    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_args_name_34, 1, tmp_tuple_element_50 );
    tmp_tuple_element_50 = locals_requests$exceptions_96;
    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_args_name_34, 2, tmp_tuple_element_50 );
    tmp_kw_name_34 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_34 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 96;
    tmp_assign_source_122 = CALL_FUNCTION( tmp_called_name_34, tmp_args_name_34, tmp_kw_name_34 );
    Py_DECREF( tmp_args_name_34 );
    if ( tmp_assign_source_122 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_51;
    }
    assert( outline_16_var___class__ == NULL );
    outline_16_var___class__ = tmp_assign_source_122;

    tmp_outline_return_value_17 = outline_16_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_17 );
    Py_INCREF( tmp_outline_return_value_17 );
    goto try_return_handler_51;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_51:;
    Py_DECREF( locals_requests$exceptions_96 );
    locals_requests$exceptions_96 = NULL;
    goto try_return_handler_50;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_96 );
    locals_requests$exceptions_96 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto try_except_handler_50;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_50:;
    CHECK_OBJECT( (PyObject *)outline_16_var___class__ );
    Py_DECREF( outline_16_var___class__ );
    outline_16_var___class__ = NULL;

    goto outline_result_17;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_50;
    exception_value = exception_keeper_value_50;
    exception_tb = exception_keeper_tb_50;
    exception_lineno = exception_keeper_lineno_50;

    goto outline_exception_17;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_17:;
    exception_lineno = 96;
    goto try_except_handler_49;
    outline_result_17:;
    tmp_assign_source_121 = tmp_outline_return_value_17;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ContentDecodingError, tmp_assign_source_121 );
    goto try_end_17;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    Py_XDECREF( tmp_class_creation_17__class_decl_dict );
    tmp_class_creation_17__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_17__prepared );
    tmp_class_creation_17__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__bases );
    Py_DECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__class_decl_dict );
    Py_DECREF( tmp_class_creation_17__class_decl_dict );
    tmp_class_creation_17__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__metaclass );
    Py_DECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__prepared );
    Py_DECREF( tmp_class_creation_17__prepared );
    tmp_class_creation_17__prepared = NULL;

    // Tried code:
    tmp_tuple_element_51 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_51 == NULL ))
    {
        tmp_tuple_element_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_51 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;

        goto try_except_handler_52;
    }

    tmp_assign_source_123 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_51 );
    PyTuple_SET_ITEM( tmp_assign_source_123, 0, tmp_tuple_element_51 );
    tmp_tuple_element_51 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_51 );
    PyTuple_SET_ITEM( tmp_assign_source_123, 1, tmp_tuple_element_51 );
    assert( tmp_class_creation_18__bases_orig == NULL );
    tmp_class_creation_18__bases_orig = tmp_assign_source_123;

    tmp_dircall_arg1_18 = tmp_class_creation_18__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_18 );
    Py_INCREF( tmp_dircall_arg1_18 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_18};
        tmp_assign_source_124 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_124 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_52;
    }
    assert( tmp_class_creation_18__bases == NULL );
    tmp_class_creation_18__bases = tmp_assign_source_124;

    tmp_assign_source_125 = PyDict_New();
    assert( tmp_class_creation_18__class_decl_dict == NULL );
    tmp_class_creation_18__class_decl_dict = tmp_assign_source_125;

    tmp_key_name_52 = const_str_plain_metaclass;
    tmp_dict_name_52 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_52 );
    tmp_res = PyDict_Contains( tmp_dict_name_52, tmp_key_name_52 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_52;
    }
    tmp_cond_value_52 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_52 = CHECK_IF_TRUE( tmp_cond_value_52 );
    if ( tmp_cond_truth_52 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_52;
    }
    if ( tmp_cond_truth_52 == 1 )
    {
        goto condexpr_true_52;
    }
    else
    {
        goto condexpr_false_52;
    }
    condexpr_true_52:;
    tmp_dict_name_53 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_53 );
    tmp_key_name_53 = const_str_plain_metaclass;
    tmp_metaclass_name_18 = DICT_GET_ITEM( tmp_dict_name_53, tmp_key_name_53 );
    if ( tmp_metaclass_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_52;
    }
    goto condexpr_end_52;
    condexpr_false_52:;
    tmp_cond_value_53 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_cond_value_53 );
    tmp_cond_truth_53 = CHECK_IF_TRUE( tmp_cond_value_53 );
    if ( tmp_cond_truth_53 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_52;
    }
    if ( tmp_cond_truth_53 == 1 )
    {
        goto condexpr_true_53;
    }
    else
    {
        goto condexpr_false_53;
    }
    condexpr_true_53:;
    tmp_subscribed_name_18 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_subscribed_name_18 );
    tmp_subscript_name_18 = const_int_0;
    tmp_type_arg_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
    if ( tmp_type_arg_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_52;
    }
    tmp_metaclass_name_18 = BUILTIN_TYPE1( tmp_type_arg_18 );
    Py_DECREF( tmp_type_arg_18 );
    if ( tmp_metaclass_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_52;
    }
    goto condexpr_end_53;
    condexpr_false_53:;
    tmp_metaclass_name_18 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_18 );
    condexpr_end_53:;
    condexpr_end_52:;
    tmp_bases_name_18 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_bases_name_18 );
    tmp_assign_source_126 = SELECT_METACLASS( tmp_metaclass_name_18, tmp_bases_name_18 );
    Py_DECREF( tmp_metaclass_name_18 );
    if ( tmp_assign_source_126 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_52;
    }
    assert( tmp_class_creation_18__metaclass == NULL );
    tmp_class_creation_18__metaclass = tmp_assign_source_126;

    tmp_key_name_54 = const_str_plain_metaclass;
    tmp_dict_name_54 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_54 );
    tmp_res = PyDict_Contains( tmp_dict_name_54, tmp_key_name_54 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_52;
    }
    tmp_cond_value_54 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_54 = CHECK_IF_TRUE( tmp_cond_value_54 );
    if ( tmp_cond_truth_54 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_52;
    }
    if ( tmp_cond_truth_54 == 1 )
    {
        goto branch_yes_35;
    }
    else
    {
        goto branch_no_35;
    }
    branch_yes_35:;
    tmp_dictdel_dict = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_52;
    }
    branch_no_35:;
    tmp_hasattr_source_18 = tmp_class_creation_18__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_18 );
    tmp_hasattr_attr_18 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_18, tmp_hasattr_attr_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_52;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_54;
    }
    else
    {
        goto condexpr_false_54;
    }
    condexpr_true_54:;
    tmp_source_name_18 = tmp_class_creation_18__metaclass;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain___prepare__ );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_52;
    }
    tmp_tuple_element_52 = const_str_plain_StreamConsumedError;
    tmp_args_name_35 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_args_name_35, 0, tmp_tuple_element_52 );
    tmp_tuple_element_52 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_tuple_element_52 );
    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_args_name_35, 1, tmp_tuple_element_52 );
    tmp_kw_name_35 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_35 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 100;
    tmp_assign_source_127 = CALL_FUNCTION( tmp_called_name_35, tmp_args_name_35, tmp_kw_name_35 );
    Py_DECREF( tmp_called_name_35 );
    Py_DECREF( tmp_args_name_35 );
    if ( tmp_assign_source_127 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_52;
    }
    goto condexpr_end_54;
    condexpr_false_54:;
    tmp_assign_source_127 = PyDict_New();
    condexpr_end_54:;
    assert( tmp_class_creation_18__prepared == NULL );
    tmp_class_creation_18__prepared = tmp_assign_source_127;

    tmp_set_locals = tmp_class_creation_18__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_100 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_100, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_54;
    }
    tmp_dictset_value = const_str_digest_c1f4dcdf3195a093500cff5b8859ecc9;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_100, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_54;
    }
    tmp_dictset_value = const_str_plain_StreamConsumedError;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_100, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_54;
    }
    tmp_compare_left_18 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_compare_left_18 );
    tmp_compare_right_18 = tmp_class_creation_18__bases_orig;

    CHECK_OBJECT( tmp_compare_right_18 );
    tmp_cmp_NotEq_18 = RICH_COMPARE_BOOL_NE( tmp_compare_left_18, tmp_compare_right_18 );
    if ( tmp_cmp_NotEq_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_54;
    }
    if ( tmp_cmp_NotEq_18 == 1 )
    {
        goto branch_yes_36;
    }
    else
    {
        goto branch_no_36;
    }
    branch_yes_36:;
    tmp_dictset_value = tmp_class_creation_18__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_100, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_54;
    }
    branch_no_36:;
    tmp_called_name_36 = tmp_class_creation_18__metaclass;

    CHECK_OBJECT( tmp_called_name_36 );
    tmp_tuple_element_53 = const_str_plain_StreamConsumedError;
    tmp_args_name_36 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_args_name_36, 0, tmp_tuple_element_53 );
    tmp_tuple_element_53 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_tuple_element_53 );
    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_args_name_36, 1, tmp_tuple_element_53 );
    tmp_tuple_element_53 = locals_requests$exceptions_100;
    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_args_name_36, 2, tmp_tuple_element_53 );
    tmp_kw_name_36 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_36 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 100;
    tmp_assign_source_129 = CALL_FUNCTION( tmp_called_name_36, tmp_args_name_36, tmp_kw_name_36 );
    Py_DECREF( tmp_args_name_36 );
    if ( tmp_assign_source_129 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_54;
    }
    assert( outline_17_var___class__ == NULL );
    outline_17_var___class__ = tmp_assign_source_129;

    tmp_outline_return_value_18 = outline_17_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_18 );
    Py_INCREF( tmp_outline_return_value_18 );
    goto try_return_handler_54;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_54:;
    Py_DECREF( locals_requests$exceptions_100 );
    locals_requests$exceptions_100 = NULL;
    goto try_return_handler_53;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_keeper_lineno_52 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_100 );
    locals_requests$exceptions_100 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_52;
    exception_value = exception_keeper_value_52;
    exception_tb = exception_keeper_tb_52;
    exception_lineno = exception_keeper_lineno_52;

    goto try_except_handler_53;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_53:;
    CHECK_OBJECT( (PyObject *)outline_17_var___class__ );
    Py_DECREF( outline_17_var___class__ );
    outline_17_var___class__ = NULL;

    goto outline_result_18;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto outline_exception_18;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_18:;
    exception_lineno = 100;
    goto try_except_handler_52;
    outline_result_18:;
    tmp_assign_source_128 = tmp_outline_return_value_18;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_StreamConsumedError, tmp_assign_source_128 );
    goto try_end_18;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_54 = exception_type;
    exception_keeper_value_54 = exception_value;
    exception_keeper_tb_54 = exception_tb;
    exception_keeper_lineno_54 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    Py_XDECREF( tmp_class_creation_18__class_decl_dict );
    tmp_class_creation_18__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_18__prepared );
    tmp_class_creation_18__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_54;
    exception_value = exception_keeper_value_54;
    exception_tb = exception_keeper_tb_54;
    exception_lineno = exception_keeper_lineno_54;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__bases );
    Py_DECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__class_decl_dict );
    Py_DECREF( tmp_class_creation_18__class_decl_dict );
    tmp_class_creation_18__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__metaclass );
    Py_DECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__prepared );
    Py_DECREF( tmp_class_creation_18__prepared );
    tmp_class_creation_18__prepared = NULL;

    // Tried code:
    tmp_tuple_element_54 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_54 == NULL ))
    {
        tmp_tuple_element_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_54 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;

        goto try_except_handler_55;
    }

    tmp_assign_source_130 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_54 );
    PyTuple_SET_ITEM( tmp_assign_source_130, 0, tmp_tuple_element_54 );
    assert( tmp_class_creation_19__bases_orig == NULL );
    tmp_class_creation_19__bases_orig = tmp_assign_source_130;

    tmp_dircall_arg1_19 = tmp_class_creation_19__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_19 );
    Py_INCREF( tmp_dircall_arg1_19 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_19};
        tmp_assign_source_131 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_131 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_55;
    }
    assert( tmp_class_creation_19__bases == NULL );
    tmp_class_creation_19__bases = tmp_assign_source_131;

    tmp_assign_source_132 = PyDict_New();
    assert( tmp_class_creation_19__class_decl_dict == NULL );
    tmp_class_creation_19__class_decl_dict = tmp_assign_source_132;

    tmp_key_name_55 = const_str_plain_metaclass;
    tmp_dict_name_55 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_55 );
    tmp_res = PyDict_Contains( tmp_dict_name_55, tmp_key_name_55 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_55;
    }
    tmp_cond_value_55 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_55 = CHECK_IF_TRUE( tmp_cond_value_55 );
    if ( tmp_cond_truth_55 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_55;
    }
    if ( tmp_cond_truth_55 == 1 )
    {
        goto condexpr_true_55;
    }
    else
    {
        goto condexpr_false_55;
    }
    condexpr_true_55:;
    tmp_dict_name_56 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_56 );
    tmp_key_name_56 = const_str_plain_metaclass;
    tmp_metaclass_name_19 = DICT_GET_ITEM( tmp_dict_name_56, tmp_key_name_56 );
    if ( tmp_metaclass_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_55;
    }
    goto condexpr_end_55;
    condexpr_false_55:;
    tmp_cond_value_56 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_cond_value_56 );
    tmp_cond_truth_56 = CHECK_IF_TRUE( tmp_cond_value_56 );
    if ( tmp_cond_truth_56 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_55;
    }
    if ( tmp_cond_truth_56 == 1 )
    {
        goto condexpr_true_56;
    }
    else
    {
        goto condexpr_false_56;
    }
    condexpr_true_56:;
    tmp_subscribed_name_19 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_subscribed_name_19 );
    tmp_subscript_name_19 = const_int_0;
    tmp_type_arg_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
    if ( tmp_type_arg_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_55;
    }
    tmp_metaclass_name_19 = BUILTIN_TYPE1( tmp_type_arg_19 );
    Py_DECREF( tmp_type_arg_19 );
    if ( tmp_metaclass_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_55;
    }
    goto condexpr_end_56;
    condexpr_false_56:;
    tmp_metaclass_name_19 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_19 );
    condexpr_end_56:;
    condexpr_end_55:;
    tmp_bases_name_19 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_bases_name_19 );
    tmp_assign_source_133 = SELECT_METACLASS( tmp_metaclass_name_19, tmp_bases_name_19 );
    Py_DECREF( tmp_metaclass_name_19 );
    if ( tmp_assign_source_133 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_55;
    }
    assert( tmp_class_creation_19__metaclass == NULL );
    tmp_class_creation_19__metaclass = tmp_assign_source_133;

    tmp_key_name_57 = const_str_plain_metaclass;
    tmp_dict_name_57 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_57 );
    tmp_res = PyDict_Contains( tmp_dict_name_57, tmp_key_name_57 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_55;
    }
    tmp_cond_value_57 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_57 = CHECK_IF_TRUE( tmp_cond_value_57 );
    if ( tmp_cond_truth_57 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_55;
    }
    if ( tmp_cond_truth_57 == 1 )
    {
        goto branch_yes_37;
    }
    else
    {
        goto branch_no_37;
    }
    branch_yes_37:;
    tmp_dictdel_dict = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_55;
    }
    branch_no_37:;
    tmp_hasattr_source_19 = tmp_class_creation_19__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_19 );
    tmp_hasattr_attr_19 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_19, tmp_hasattr_attr_19 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_55;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_57;
    }
    else
    {
        goto condexpr_false_57;
    }
    condexpr_true_57:;
    tmp_source_name_19 = tmp_class_creation_19__metaclass;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_called_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain___prepare__ );
    if ( tmp_called_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_55;
    }
    tmp_tuple_element_55 = const_str_plain_RetryError;
    tmp_args_name_37 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_args_name_37, 0, tmp_tuple_element_55 );
    tmp_tuple_element_55 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_tuple_element_55 );
    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_args_name_37, 1, tmp_tuple_element_55 );
    tmp_kw_name_37 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_37 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 104;
    tmp_assign_source_134 = CALL_FUNCTION( tmp_called_name_37, tmp_args_name_37, tmp_kw_name_37 );
    Py_DECREF( tmp_called_name_37 );
    Py_DECREF( tmp_args_name_37 );
    if ( tmp_assign_source_134 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_55;
    }
    goto condexpr_end_57;
    condexpr_false_57:;
    tmp_assign_source_134 = PyDict_New();
    condexpr_end_57:;
    assert( tmp_class_creation_19__prepared == NULL );
    tmp_class_creation_19__prepared = tmp_assign_source_134;

    tmp_set_locals = tmp_class_creation_19__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_104 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_104, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_57;
    }
    tmp_dictset_value = const_str_digest_b3f79f0ff88ef53ddf2012488144e436;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_104, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_57;
    }
    tmp_dictset_value = const_str_plain_RetryError;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_104, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_57;
    }
    tmp_compare_left_19 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_compare_left_19 );
    tmp_compare_right_19 = tmp_class_creation_19__bases_orig;

    CHECK_OBJECT( tmp_compare_right_19 );
    tmp_cmp_NotEq_19 = RICH_COMPARE_BOOL_NE( tmp_compare_left_19, tmp_compare_right_19 );
    if ( tmp_cmp_NotEq_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_57;
    }
    if ( tmp_cmp_NotEq_19 == 1 )
    {
        goto branch_yes_38;
    }
    else
    {
        goto branch_no_38;
    }
    branch_yes_38:;
    tmp_dictset_value = tmp_class_creation_19__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_104, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_57;
    }
    branch_no_38:;
    tmp_called_name_38 = tmp_class_creation_19__metaclass;

    CHECK_OBJECT( tmp_called_name_38 );
    tmp_tuple_element_56 = const_str_plain_RetryError;
    tmp_args_name_38 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_args_name_38, 0, tmp_tuple_element_56 );
    tmp_tuple_element_56 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_tuple_element_56 );
    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_args_name_38, 1, tmp_tuple_element_56 );
    tmp_tuple_element_56 = locals_requests$exceptions_104;
    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_args_name_38, 2, tmp_tuple_element_56 );
    tmp_kw_name_38 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_38 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 104;
    tmp_assign_source_136 = CALL_FUNCTION( tmp_called_name_38, tmp_args_name_38, tmp_kw_name_38 );
    Py_DECREF( tmp_args_name_38 );
    if ( tmp_assign_source_136 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_57;
    }
    assert( outline_18_var___class__ == NULL );
    outline_18_var___class__ = tmp_assign_source_136;

    tmp_outline_return_value_19 = outline_18_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_19 );
    Py_INCREF( tmp_outline_return_value_19 );
    goto try_return_handler_57;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_57:;
    Py_DECREF( locals_requests$exceptions_104 );
    locals_requests$exceptions_104 = NULL;
    goto try_return_handler_56;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_keeper_lineno_55 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_104 );
    locals_requests$exceptions_104 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_55;
    exception_value = exception_keeper_value_55;
    exception_tb = exception_keeper_tb_55;
    exception_lineno = exception_keeper_lineno_55;

    goto try_except_handler_56;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_56:;
    CHECK_OBJECT( (PyObject *)outline_18_var___class__ );
    Py_DECREF( outline_18_var___class__ );
    outline_18_var___class__ = NULL;

    goto outline_result_19;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_56 = exception_type;
    exception_keeper_value_56 = exception_value;
    exception_keeper_tb_56 = exception_tb;
    exception_keeper_lineno_56 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_56;
    exception_value = exception_keeper_value_56;
    exception_tb = exception_keeper_tb_56;
    exception_lineno = exception_keeper_lineno_56;

    goto outline_exception_19;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_19:;
    exception_lineno = 104;
    goto try_except_handler_55;
    outline_result_19:;
    tmp_assign_source_135 = tmp_outline_return_value_19;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RetryError, tmp_assign_source_135 );
    goto try_end_19;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_keeper_lineno_57 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    Py_XDECREF( tmp_class_creation_19__class_decl_dict );
    tmp_class_creation_19__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_19__prepared );
    tmp_class_creation_19__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_57;
    exception_value = exception_keeper_value_57;
    exception_tb = exception_keeper_tb_57;
    exception_lineno = exception_keeper_lineno_57;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__bases );
    Py_DECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__class_decl_dict );
    Py_DECREF( tmp_class_creation_19__class_decl_dict );
    tmp_class_creation_19__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__metaclass );
    Py_DECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__prepared );
    Py_DECREF( tmp_class_creation_19__prepared );
    tmp_class_creation_19__prepared = NULL;

    // Tried code:
    tmp_tuple_element_57 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_57 == NULL ))
    {
        tmp_tuple_element_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_57 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;

        goto try_except_handler_58;
    }

    tmp_assign_source_137 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_57 );
    PyTuple_SET_ITEM( tmp_assign_source_137, 0, tmp_tuple_element_57 );
    assert( tmp_class_creation_20__bases_orig == NULL );
    tmp_class_creation_20__bases_orig = tmp_assign_source_137;

    tmp_dircall_arg1_20 = tmp_class_creation_20__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_20 );
    Py_INCREF( tmp_dircall_arg1_20 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_20};
        tmp_assign_source_138 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_138 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_58;
    }
    assert( tmp_class_creation_20__bases == NULL );
    tmp_class_creation_20__bases = tmp_assign_source_138;

    tmp_assign_source_139 = PyDict_New();
    assert( tmp_class_creation_20__class_decl_dict == NULL );
    tmp_class_creation_20__class_decl_dict = tmp_assign_source_139;

    tmp_key_name_58 = const_str_plain_metaclass;
    tmp_dict_name_58 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_58 );
    tmp_res = PyDict_Contains( tmp_dict_name_58, tmp_key_name_58 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_58;
    }
    tmp_cond_value_58 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_58 = CHECK_IF_TRUE( tmp_cond_value_58 );
    if ( tmp_cond_truth_58 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_58;
    }
    if ( tmp_cond_truth_58 == 1 )
    {
        goto condexpr_true_58;
    }
    else
    {
        goto condexpr_false_58;
    }
    condexpr_true_58:;
    tmp_dict_name_59 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_59 );
    tmp_key_name_59 = const_str_plain_metaclass;
    tmp_metaclass_name_20 = DICT_GET_ITEM( tmp_dict_name_59, tmp_key_name_59 );
    if ( tmp_metaclass_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_58;
    }
    goto condexpr_end_58;
    condexpr_false_58:;
    tmp_cond_value_59 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_cond_value_59 );
    tmp_cond_truth_59 = CHECK_IF_TRUE( tmp_cond_value_59 );
    if ( tmp_cond_truth_59 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_58;
    }
    if ( tmp_cond_truth_59 == 1 )
    {
        goto condexpr_true_59;
    }
    else
    {
        goto condexpr_false_59;
    }
    condexpr_true_59:;
    tmp_subscribed_name_20 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_subscribed_name_20 );
    tmp_subscript_name_20 = const_int_0;
    tmp_type_arg_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
    if ( tmp_type_arg_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_58;
    }
    tmp_metaclass_name_20 = BUILTIN_TYPE1( tmp_type_arg_20 );
    Py_DECREF( tmp_type_arg_20 );
    if ( tmp_metaclass_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_58;
    }
    goto condexpr_end_59;
    condexpr_false_59:;
    tmp_metaclass_name_20 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_20 );
    condexpr_end_59:;
    condexpr_end_58:;
    tmp_bases_name_20 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_bases_name_20 );
    tmp_assign_source_140 = SELECT_METACLASS( tmp_metaclass_name_20, tmp_bases_name_20 );
    Py_DECREF( tmp_metaclass_name_20 );
    if ( tmp_assign_source_140 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_58;
    }
    assert( tmp_class_creation_20__metaclass == NULL );
    tmp_class_creation_20__metaclass = tmp_assign_source_140;

    tmp_key_name_60 = const_str_plain_metaclass;
    tmp_dict_name_60 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_60 );
    tmp_res = PyDict_Contains( tmp_dict_name_60, tmp_key_name_60 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_58;
    }
    tmp_cond_value_60 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_60 = CHECK_IF_TRUE( tmp_cond_value_60 );
    if ( tmp_cond_truth_60 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_58;
    }
    if ( tmp_cond_truth_60 == 1 )
    {
        goto branch_yes_39;
    }
    else
    {
        goto branch_no_39;
    }
    branch_yes_39:;
    tmp_dictdel_dict = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_58;
    }
    branch_no_39:;
    tmp_hasattr_source_20 = tmp_class_creation_20__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_20 );
    tmp_hasattr_attr_20 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_20, tmp_hasattr_attr_20 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_58;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_60;
    }
    else
    {
        goto condexpr_false_60;
    }
    condexpr_true_60:;
    tmp_source_name_20 = tmp_class_creation_20__metaclass;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_called_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain___prepare__ );
    if ( tmp_called_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_58;
    }
    tmp_tuple_element_58 = const_str_plain_UnrewindableBodyError;
    tmp_args_name_39 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_58 );
    PyTuple_SET_ITEM( tmp_args_name_39, 0, tmp_tuple_element_58 );
    tmp_tuple_element_58 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_tuple_element_58 );
    Py_INCREF( tmp_tuple_element_58 );
    PyTuple_SET_ITEM( tmp_args_name_39, 1, tmp_tuple_element_58 );
    tmp_kw_name_39 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_39 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 108;
    tmp_assign_source_141 = CALL_FUNCTION( tmp_called_name_39, tmp_args_name_39, tmp_kw_name_39 );
    Py_DECREF( tmp_called_name_39 );
    Py_DECREF( tmp_args_name_39 );
    if ( tmp_assign_source_141 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_58;
    }
    goto condexpr_end_60;
    condexpr_false_60:;
    tmp_assign_source_141 = PyDict_New();
    condexpr_end_60:;
    assert( tmp_class_creation_20__prepared == NULL );
    tmp_class_creation_20__prepared = tmp_assign_source_141;

    tmp_set_locals = tmp_class_creation_20__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_108 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_108, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_60;
    }
    tmp_dictset_value = const_str_digest_382efa1ab11fb4a35860fc2596b633ab;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_108, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_60;
    }
    tmp_dictset_value = const_str_plain_UnrewindableBodyError;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_108, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_60;
    }
    tmp_compare_left_20 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_compare_left_20 );
    tmp_compare_right_20 = tmp_class_creation_20__bases_orig;

    CHECK_OBJECT( tmp_compare_right_20 );
    tmp_cmp_NotEq_20 = RICH_COMPARE_BOOL_NE( tmp_compare_left_20, tmp_compare_right_20 );
    if ( tmp_cmp_NotEq_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_60;
    }
    if ( tmp_cmp_NotEq_20 == 1 )
    {
        goto branch_yes_40;
    }
    else
    {
        goto branch_no_40;
    }
    branch_yes_40:;
    tmp_dictset_value = tmp_class_creation_20__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_108, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_60;
    }
    branch_no_40:;
    tmp_called_name_40 = tmp_class_creation_20__metaclass;

    CHECK_OBJECT( tmp_called_name_40 );
    tmp_tuple_element_59 = const_str_plain_UnrewindableBodyError;
    tmp_args_name_40 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_args_name_40, 0, tmp_tuple_element_59 );
    tmp_tuple_element_59 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_tuple_element_59 );
    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_args_name_40, 1, tmp_tuple_element_59 );
    tmp_tuple_element_59 = locals_requests$exceptions_108;
    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_args_name_40, 2, tmp_tuple_element_59 );
    tmp_kw_name_40 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_40 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 108;
    tmp_assign_source_143 = CALL_FUNCTION( tmp_called_name_40, tmp_args_name_40, tmp_kw_name_40 );
    Py_DECREF( tmp_args_name_40 );
    if ( tmp_assign_source_143 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_60;
    }
    assert( outline_19_var___class__ == NULL );
    outline_19_var___class__ = tmp_assign_source_143;

    tmp_outline_return_value_20 = outline_19_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_20 );
    Py_INCREF( tmp_outline_return_value_20 );
    goto try_return_handler_60;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_60:;
    Py_DECREF( locals_requests$exceptions_108 );
    locals_requests$exceptions_108 = NULL;
    goto try_return_handler_59;
    // Exception handler code:
    try_except_handler_60:;
    exception_keeper_type_58 = exception_type;
    exception_keeper_value_58 = exception_value;
    exception_keeper_tb_58 = exception_tb;
    exception_keeper_lineno_58 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_108 );
    locals_requests$exceptions_108 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_58;
    exception_value = exception_keeper_value_58;
    exception_tb = exception_keeper_tb_58;
    exception_lineno = exception_keeper_lineno_58;

    goto try_except_handler_59;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_59:;
    CHECK_OBJECT( (PyObject *)outline_19_var___class__ );
    Py_DECREF( outline_19_var___class__ );
    outline_19_var___class__ = NULL;

    goto outline_result_20;
    // Exception handler code:
    try_except_handler_59:;
    exception_keeper_type_59 = exception_type;
    exception_keeper_value_59 = exception_value;
    exception_keeper_tb_59 = exception_tb;
    exception_keeper_lineno_59 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_59;
    exception_value = exception_keeper_value_59;
    exception_tb = exception_keeper_tb_59;
    exception_lineno = exception_keeper_lineno_59;

    goto outline_exception_20;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_20:;
    exception_lineno = 108;
    goto try_except_handler_58;
    outline_result_20:;
    tmp_assign_source_142 = tmp_outline_return_value_20;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError, tmp_assign_source_142 );
    goto try_end_20;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_type_60 = exception_type;
    exception_keeper_value_60 = exception_value;
    exception_keeper_tb_60 = exception_tb;
    exception_keeper_lineno_60 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    Py_XDECREF( tmp_class_creation_20__class_decl_dict );
    tmp_class_creation_20__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_20__prepared );
    tmp_class_creation_20__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_60;
    exception_value = exception_keeper_value_60;
    exception_tb = exception_keeper_tb_60;
    exception_lineno = exception_keeper_lineno_60;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__bases );
    Py_DECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__class_decl_dict );
    Py_DECREF( tmp_class_creation_20__class_decl_dict );
    tmp_class_creation_20__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__metaclass );
    Py_DECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__prepared );
    Py_DECREF( tmp_class_creation_20__prepared );
    tmp_class_creation_20__prepared = NULL;

    // Tried code:
    tmp_tuple_element_60 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_tuple_element_60 == NULL ))
    {
        tmp_tuple_element_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_tuple_element_60 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;

        goto try_except_handler_61;
    }

    tmp_assign_source_144 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_60 );
    PyTuple_SET_ITEM( tmp_assign_source_144, 0, tmp_tuple_element_60 );
    assert( tmp_class_creation_21__bases_orig == NULL );
    tmp_class_creation_21__bases_orig = tmp_assign_source_144;

    tmp_dircall_arg1_21 = tmp_class_creation_21__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_21 );
    Py_INCREF( tmp_dircall_arg1_21 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_21};
        tmp_assign_source_145 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_145 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_61;
    }
    assert( tmp_class_creation_21__bases == NULL );
    tmp_class_creation_21__bases = tmp_assign_source_145;

    tmp_assign_source_146 = PyDict_New();
    assert( tmp_class_creation_21__class_decl_dict == NULL );
    tmp_class_creation_21__class_decl_dict = tmp_assign_source_146;

    tmp_key_name_61 = const_str_plain_metaclass;
    tmp_dict_name_61 = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_61 );
    tmp_res = PyDict_Contains( tmp_dict_name_61, tmp_key_name_61 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_61;
    }
    tmp_cond_value_61 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_61 = CHECK_IF_TRUE( tmp_cond_value_61 );
    if ( tmp_cond_truth_61 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_61;
    }
    if ( tmp_cond_truth_61 == 1 )
    {
        goto condexpr_true_61;
    }
    else
    {
        goto condexpr_false_61;
    }
    condexpr_true_61:;
    tmp_dict_name_62 = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_62 );
    tmp_key_name_62 = const_str_plain_metaclass;
    tmp_metaclass_name_21 = DICT_GET_ITEM( tmp_dict_name_62, tmp_key_name_62 );
    if ( tmp_metaclass_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_61;
    }
    goto condexpr_end_61;
    condexpr_false_61:;
    tmp_cond_value_62 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_cond_value_62 );
    tmp_cond_truth_62 = CHECK_IF_TRUE( tmp_cond_value_62 );
    if ( tmp_cond_truth_62 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_61;
    }
    if ( tmp_cond_truth_62 == 1 )
    {
        goto condexpr_true_62;
    }
    else
    {
        goto condexpr_false_62;
    }
    condexpr_true_62:;
    tmp_subscribed_name_21 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_subscribed_name_21 );
    tmp_subscript_name_21 = const_int_0;
    tmp_type_arg_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
    if ( tmp_type_arg_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_61;
    }
    tmp_metaclass_name_21 = BUILTIN_TYPE1( tmp_type_arg_21 );
    Py_DECREF( tmp_type_arg_21 );
    if ( tmp_metaclass_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_61;
    }
    goto condexpr_end_62;
    condexpr_false_62:;
    tmp_metaclass_name_21 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_21 );
    condexpr_end_62:;
    condexpr_end_61:;
    tmp_bases_name_21 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_bases_name_21 );
    tmp_assign_source_147 = SELECT_METACLASS( tmp_metaclass_name_21, tmp_bases_name_21 );
    Py_DECREF( tmp_metaclass_name_21 );
    if ( tmp_assign_source_147 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_61;
    }
    assert( tmp_class_creation_21__metaclass == NULL );
    tmp_class_creation_21__metaclass = tmp_assign_source_147;

    tmp_key_name_63 = const_str_plain_metaclass;
    tmp_dict_name_63 = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_63 );
    tmp_res = PyDict_Contains( tmp_dict_name_63, tmp_key_name_63 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_61;
    }
    tmp_cond_value_63 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_63 = CHECK_IF_TRUE( tmp_cond_value_63 );
    if ( tmp_cond_truth_63 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_61;
    }
    if ( tmp_cond_truth_63 == 1 )
    {
        goto branch_yes_41;
    }
    else
    {
        goto branch_no_41;
    }
    branch_yes_41:;
    tmp_dictdel_dict = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_61;
    }
    branch_no_41:;
    tmp_hasattr_source_21 = tmp_class_creation_21__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_21 );
    tmp_hasattr_attr_21 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_21, tmp_hasattr_attr_21 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_61;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_63;
    }
    else
    {
        goto condexpr_false_63;
    }
    condexpr_true_63:;
    tmp_source_name_21 = tmp_class_creation_21__metaclass;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain___prepare__ );
    if ( tmp_called_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_61;
    }
    tmp_tuple_element_61 = const_str_plain_RequestsWarning;
    tmp_args_name_41 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_61 );
    PyTuple_SET_ITEM( tmp_args_name_41, 0, tmp_tuple_element_61 );
    tmp_tuple_element_61 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_tuple_element_61 );
    Py_INCREF( tmp_tuple_element_61 );
    PyTuple_SET_ITEM( tmp_args_name_41, 1, tmp_tuple_element_61 );
    tmp_kw_name_41 = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_41 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 114;
    tmp_assign_source_148 = CALL_FUNCTION( tmp_called_name_41, tmp_args_name_41, tmp_kw_name_41 );
    Py_DECREF( tmp_called_name_41 );
    Py_DECREF( tmp_args_name_41 );
    if ( tmp_assign_source_148 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_61;
    }
    goto condexpr_end_63;
    condexpr_false_63:;
    tmp_assign_source_148 = PyDict_New();
    condexpr_end_63:;
    assert( tmp_class_creation_21__prepared == NULL );
    tmp_class_creation_21__prepared = tmp_assign_source_148;

    tmp_set_locals = tmp_class_creation_21__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_114 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_114, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_63;
    }
    tmp_dictset_value = const_str_digest_231982acca444de8f23c0288db53eaef;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_114, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_63;
    }
    tmp_dictset_value = const_str_plain_RequestsWarning;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_114, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_63;
    }
    tmp_compare_left_21 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_compare_left_21 );
    tmp_compare_right_21 = tmp_class_creation_21__bases_orig;

    CHECK_OBJECT( tmp_compare_right_21 );
    tmp_cmp_NotEq_21 = RICH_COMPARE_BOOL_NE( tmp_compare_left_21, tmp_compare_right_21 );
    if ( tmp_cmp_NotEq_21 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_63;
    }
    if ( tmp_cmp_NotEq_21 == 1 )
    {
        goto branch_yes_42;
    }
    else
    {
        goto branch_no_42;
    }
    branch_yes_42:;
    tmp_dictset_value = tmp_class_creation_21__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_114, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_63;
    }
    branch_no_42:;
    tmp_called_name_42 = tmp_class_creation_21__metaclass;

    CHECK_OBJECT( tmp_called_name_42 );
    tmp_tuple_element_62 = const_str_plain_RequestsWarning;
    tmp_args_name_42 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_62 );
    PyTuple_SET_ITEM( tmp_args_name_42, 0, tmp_tuple_element_62 );
    tmp_tuple_element_62 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_tuple_element_62 );
    Py_INCREF( tmp_tuple_element_62 );
    PyTuple_SET_ITEM( tmp_args_name_42, 1, tmp_tuple_element_62 );
    tmp_tuple_element_62 = locals_requests$exceptions_114;
    Py_INCREF( tmp_tuple_element_62 );
    PyTuple_SET_ITEM( tmp_args_name_42, 2, tmp_tuple_element_62 );
    tmp_kw_name_42 = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_42 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 114;
    tmp_assign_source_150 = CALL_FUNCTION( tmp_called_name_42, tmp_args_name_42, tmp_kw_name_42 );
    Py_DECREF( tmp_args_name_42 );
    if ( tmp_assign_source_150 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_63;
    }
    assert( outline_20_var___class__ == NULL );
    outline_20_var___class__ = tmp_assign_source_150;

    tmp_outline_return_value_21 = outline_20_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_21 );
    Py_INCREF( tmp_outline_return_value_21 );
    goto try_return_handler_63;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_63:;
    Py_DECREF( locals_requests$exceptions_114 );
    locals_requests$exceptions_114 = NULL;
    goto try_return_handler_62;
    // Exception handler code:
    try_except_handler_63:;
    exception_keeper_type_61 = exception_type;
    exception_keeper_value_61 = exception_value;
    exception_keeper_tb_61 = exception_tb;
    exception_keeper_lineno_61 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_114 );
    locals_requests$exceptions_114 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_61;
    exception_value = exception_keeper_value_61;
    exception_tb = exception_keeper_tb_61;
    exception_lineno = exception_keeper_lineno_61;

    goto try_except_handler_62;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_62:;
    CHECK_OBJECT( (PyObject *)outline_20_var___class__ );
    Py_DECREF( outline_20_var___class__ );
    outline_20_var___class__ = NULL;

    goto outline_result_21;
    // Exception handler code:
    try_except_handler_62:;
    exception_keeper_type_62 = exception_type;
    exception_keeper_value_62 = exception_value;
    exception_keeper_tb_62 = exception_tb;
    exception_keeper_lineno_62 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_62;
    exception_value = exception_keeper_value_62;
    exception_tb = exception_keeper_tb_62;
    exception_lineno = exception_keeper_lineno_62;

    goto outline_exception_21;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_21:;
    exception_lineno = 114;
    goto try_except_handler_61;
    outline_result_21:;
    tmp_assign_source_149 = tmp_outline_return_value_21;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsWarning, tmp_assign_source_149 );
    goto try_end_21;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_type_63 = exception_type;
    exception_keeper_value_63 = exception_value;
    exception_keeper_tb_63 = exception_tb;
    exception_keeper_lineno_63 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_21__bases );
    tmp_class_creation_21__bases = NULL;

    Py_XDECREF( tmp_class_creation_21__class_decl_dict );
    tmp_class_creation_21__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_21__prepared );
    tmp_class_creation_21__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_63;
    exception_value = exception_keeper_value_63;
    exception_tb = exception_keeper_tb_63;
    exception_lineno = exception_keeper_lineno_63;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__bases );
    Py_DECREF( tmp_class_creation_21__bases );
    tmp_class_creation_21__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__class_decl_dict );
    Py_DECREF( tmp_class_creation_21__class_decl_dict );
    tmp_class_creation_21__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__metaclass );
    Py_DECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__prepared );
    Py_DECREF( tmp_class_creation_21__prepared );
    tmp_class_creation_21__prepared = NULL;

    // Tried code:
    tmp_tuple_element_63 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsWarning );

    if (unlikely( tmp_tuple_element_63 == NULL ))
    {
        tmp_tuple_element_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsWarning );
    }

    if ( tmp_tuple_element_63 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestsWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;

        goto try_except_handler_64;
    }

    tmp_assign_source_151 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_63 );
    PyTuple_SET_ITEM( tmp_assign_source_151, 0, tmp_tuple_element_63 );
    tmp_tuple_element_63 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

    if (unlikely( tmp_tuple_element_63 == NULL ))
    {
        tmp_tuple_element_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
    }

    if ( tmp_tuple_element_63 == NULL )
    {
        Py_DECREF( tmp_assign_source_151 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;

        goto try_except_handler_64;
    }

    Py_INCREF( tmp_tuple_element_63 );
    PyTuple_SET_ITEM( tmp_assign_source_151, 1, tmp_tuple_element_63 );
    assert( tmp_class_creation_22__bases_orig == NULL );
    tmp_class_creation_22__bases_orig = tmp_assign_source_151;

    tmp_dircall_arg1_22 = tmp_class_creation_22__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_22 );
    Py_INCREF( tmp_dircall_arg1_22 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_22};
        tmp_assign_source_152 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_152 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_64;
    }
    assert( tmp_class_creation_22__bases == NULL );
    tmp_class_creation_22__bases = tmp_assign_source_152;

    tmp_assign_source_153 = PyDict_New();
    assert( tmp_class_creation_22__class_decl_dict == NULL );
    tmp_class_creation_22__class_decl_dict = tmp_assign_source_153;

    tmp_key_name_64 = const_str_plain_metaclass;
    tmp_dict_name_64 = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_64 );
    tmp_res = PyDict_Contains( tmp_dict_name_64, tmp_key_name_64 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_64;
    }
    tmp_cond_value_64 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_64 = CHECK_IF_TRUE( tmp_cond_value_64 );
    if ( tmp_cond_truth_64 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_64;
    }
    if ( tmp_cond_truth_64 == 1 )
    {
        goto condexpr_true_64;
    }
    else
    {
        goto condexpr_false_64;
    }
    condexpr_true_64:;
    tmp_dict_name_65 = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_65 );
    tmp_key_name_65 = const_str_plain_metaclass;
    tmp_metaclass_name_22 = DICT_GET_ITEM( tmp_dict_name_65, tmp_key_name_65 );
    if ( tmp_metaclass_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_64;
    }
    goto condexpr_end_64;
    condexpr_false_64:;
    tmp_cond_value_65 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_cond_value_65 );
    tmp_cond_truth_65 = CHECK_IF_TRUE( tmp_cond_value_65 );
    if ( tmp_cond_truth_65 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_64;
    }
    if ( tmp_cond_truth_65 == 1 )
    {
        goto condexpr_true_65;
    }
    else
    {
        goto condexpr_false_65;
    }
    condexpr_true_65:;
    tmp_subscribed_name_22 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_subscribed_name_22 );
    tmp_subscript_name_22 = const_int_0;
    tmp_type_arg_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_22, tmp_subscript_name_22 );
    if ( tmp_type_arg_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_64;
    }
    tmp_metaclass_name_22 = BUILTIN_TYPE1( tmp_type_arg_22 );
    Py_DECREF( tmp_type_arg_22 );
    if ( tmp_metaclass_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_64;
    }
    goto condexpr_end_65;
    condexpr_false_65:;
    tmp_metaclass_name_22 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_22 );
    condexpr_end_65:;
    condexpr_end_64:;
    tmp_bases_name_22 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_bases_name_22 );
    tmp_assign_source_154 = SELECT_METACLASS( tmp_metaclass_name_22, tmp_bases_name_22 );
    Py_DECREF( tmp_metaclass_name_22 );
    if ( tmp_assign_source_154 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_64;
    }
    assert( tmp_class_creation_22__metaclass == NULL );
    tmp_class_creation_22__metaclass = tmp_assign_source_154;

    tmp_key_name_66 = const_str_plain_metaclass;
    tmp_dict_name_66 = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_66 );
    tmp_res = PyDict_Contains( tmp_dict_name_66, tmp_key_name_66 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_64;
    }
    tmp_cond_value_66 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_66 = CHECK_IF_TRUE( tmp_cond_value_66 );
    if ( tmp_cond_truth_66 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_64;
    }
    if ( tmp_cond_truth_66 == 1 )
    {
        goto branch_yes_43;
    }
    else
    {
        goto branch_no_43;
    }
    branch_yes_43:;
    tmp_dictdel_dict = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_64;
    }
    branch_no_43:;
    tmp_hasattr_source_22 = tmp_class_creation_22__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_22 );
    tmp_hasattr_attr_22 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_22, tmp_hasattr_attr_22 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_64;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_66;
    }
    else
    {
        goto condexpr_false_66;
    }
    condexpr_true_66:;
    tmp_source_name_22 = tmp_class_creation_22__metaclass;

    CHECK_OBJECT( tmp_source_name_22 );
    tmp_called_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain___prepare__ );
    if ( tmp_called_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_64;
    }
    tmp_tuple_element_64 = const_str_plain_FileModeWarning;
    tmp_args_name_43 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_64 );
    PyTuple_SET_ITEM( tmp_args_name_43, 0, tmp_tuple_element_64 );
    tmp_tuple_element_64 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_tuple_element_64 );
    Py_INCREF( tmp_tuple_element_64 );
    PyTuple_SET_ITEM( tmp_args_name_43, 1, tmp_tuple_element_64 );
    tmp_kw_name_43 = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_43 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 119;
    tmp_assign_source_155 = CALL_FUNCTION( tmp_called_name_43, tmp_args_name_43, tmp_kw_name_43 );
    Py_DECREF( tmp_called_name_43 );
    Py_DECREF( tmp_args_name_43 );
    if ( tmp_assign_source_155 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_64;
    }
    goto condexpr_end_66;
    condexpr_false_66:;
    tmp_assign_source_155 = PyDict_New();
    condexpr_end_66:;
    assert( tmp_class_creation_22__prepared == NULL );
    tmp_class_creation_22__prepared = tmp_assign_source_155;

    tmp_set_locals = tmp_class_creation_22__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_119 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_119, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_66;
    }
    tmp_dictset_value = const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_119, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_66;
    }
    tmp_dictset_value = const_str_plain_FileModeWarning;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_119, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_66;
    }
    tmp_compare_left_22 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_compare_left_22 );
    tmp_compare_right_22 = tmp_class_creation_22__bases_orig;

    CHECK_OBJECT( tmp_compare_right_22 );
    tmp_cmp_NotEq_22 = RICH_COMPARE_BOOL_NE( tmp_compare_left_22, tmp_compare_right_22 );
    if ( tmp_cmp_NotEq_22 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_66;
    }
    if ( tmp_cmp_NotEq_22 == 1 )
    {
        goto branch_yes_44;
    }
    else
    {
        goto branch_no_44;
    }
    branch_yes_44:;
    tmp_dictset_value = tmp_class_creation_22__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_119, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_66;
    }
    branch_no_44:;
    tmp_called_name_44 = tmp_class_creation_22__metaclass;

    CHECK_OBJECT( tmp_called_name_44 );
    tmp_tuple_element_65 = const_str_plain_FileModeWarning;
    tmp_args_name_44 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_65 );
    PyTuple_SET_ITEM( tmp_args_name_44, 0, tmp_tuple_element_65 );
    tmp_tuple_element_65 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_tuple_element_65 );
    Py_INCREF( tmp_tuple_element_65 );
    PyTuple_SET_ITEM( tmp_args_name_44, 1, tmp_tuple_element_65 );
    tmp_tuple_element_65 = locals_requests$exceptions_119;
    Py_INCREF( tmp_tuple_element_65 );
    PyTuple_SET_ITEM( tmp_args_name_44, 2, tmp_tuple_element_65 );
    tmp_kw_name_44 = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_44 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 119;
    tmp_assign_source_157 = CALL_FUNCTION( tmp_called_name_44, tmp_args_name_44, tmp_kw_name_44 );
    Py_DECREF( tmp_args_name_44 );
    if ( tmp_assign_source_157 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_66;
    }
    assert( outline_21_var___class__ == NULL );
    outline_21_var___class__ = tmp_assign_source_157;

    tmp_outline_return_value_22 = outline_21_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_22 );
    Py_INCREF( tmp_outline_return_value_22 );
    goto try_return_handler_66;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_66:;
    Py_DECREF( locals_requests$exceptions_119 );
    locals_requests$exceptions_119 = NULL;
    goto try_return_handler_65;
    // Exception handler code:
    try_except_handler_66:;
    exception_keeper_type_64 = exception_type;
    exception_keeper_value_64 = exception_value;
    exception_keeper_tb_64 = exception_tb;
    exception_keeper_lineno_64 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_119 );
    locals_requests$exceptions_119 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_64;
    exception_value = exception_keeper_value_64;
    exception_tb = exception_keeper_tb_64;
    exception_lineno = exception_keeper_lineno_64;

    goto try_except_handler_65;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_65:;
    CHECK_OBJECT( (PyObject *)outline_21_var___class__ );
    Py_DECREF( outline_21_var___class__ );
    outline_21_var___class__ = NULL;

    goto outline_result_22;
    // Exception handler code:
    try_except_handler_65:;
    exception_keeper_type_65 = exception_type;
    exception_keeper_value_65 = exception_value;
    exception_keeper_tb_65 = exception_tb;
    exception_keeper_lineno_65 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_65;
    exception_value = exception_keeper_value_65;
    exception_tb = exception_keeper_tb_65;
    exception_lineno = exception_keeper_lineno_65;

    goto outline_exception_22;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_22:;
    exception_lineno = 119;
    goto try_except_handler_64;
    outline_result_22:;
    tmp_assign_source_156 = tmp_outline_return_value_22;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_FileModeWarning, tmp_assign_source_156 );
    goto try_end_22;
    // Exception handler code:
    try_except_handler_64:;
    exception_keeper_type_66 = exception_type;
    exception_keeper_value_66 = exception_value;
    exception_keeper_tb_66 = exception_tb;
    exception_keeper_lineno_66 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_22__bases );
    tmp_class_creation_22__bases = NULL;

    Py_XDECREF( tmp_class_creation_22__class_decl_dict );
    tmp_class_creation_22__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_22__prepared );
    tmp_class_creation_22__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_66;
    exception_value = exception_keeper_value_66;
    exception_tb = exception_keeper_tb_66;
    exception_lineno = exception_keeper_lineno_66;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__bases );
    Py_DECREF( tmp_class_creation_22__bases );
    tmp_class_creation_22__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__class_decl_dict );
    Py_DECREF( tmp_class_creation_22__class_decl_dict );
    tmp_class_creation_22__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__metaclass );
    Py_DECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__prepared );
    Py_DECREF( tmp_class_creation_22__prepared );
    tmp_class_creation_22__prepared = NULL;

    // Tried code:
    tmp_tuple_element_66 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsWarning );

    if (unlikely( tmp_tuple_element_66 == NULL ))
    {
        tmp_tuple_element_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsWarning );
    }

    if ( tmp_tuple_element_66 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestsWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;

        goto try_except_handler_67;
    }

    tmp_assign_source_158 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_66 );
    PyTuple_SET_ITEM( tmp_assign_source_158, 0, tmp_tuple_element_66 );
    assert( tmp_class_creation_23__bases_orig == NULL );
    tmp_class_creation_23__bases_orig = tmp_assign_source_158;

    tmp_dircall_arg1_23 = tmp_class_creation_23__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_23 );
    Py_INCREF( tmp_dircall_arg1_23 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_23};
        tmp_assign_source_159 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_159 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_67;
    }
    assert( tmp_class_creation_23__bases == NULL );
    tmp_class_creation_23__bases = tmp_assign_source_159;

    tmp_assign_source_160 = PyDict_New();
    assert( tmp_class_creation_23__class_decl_dict == NULL );
    tmp_class_creation_23__class_decl_dict = tmp_assign_source_160;

    tmp_key_name_67 = const_str_plain_metaclass;
    tmp_dict_name_67 = tmp_class_creation_23__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_67 );
    tmp_res = PyDict_Contains( tmp_dict_name_67, tmp_key_name_67 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_67;
    }
    tmp_cond_value_67 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_67 = CHECK_IF_TRUE( tmp_cond_value_67 );
    if ( tmp_cond_truth_67 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_67;
    }
    if ( tmp_cond_truth_67 == 1 )
    {
        goto condexpr_true_67;
    }
    else
    {
        goto condexpr_false_67;
    }
    condexpr_true_67:;
    tmp_dict_name_68 = tmp_class_creation_23__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_68 );
    tmp_key_name_68 = const_str_plain_metaclass;
    tmp_metaclass_name_23 = DICT_GET_ITEM( tmp_dict_name_68, tmp_key_name_68 );
    if ( tmp_metaclass_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_67;
    }
    goto condexpr_end_67;
    condexpr_false_67:;
    tmp_cond_value_68 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_cond_value_68 );
    tmp_cond_truth_68 = CHECK_IF_TRUE( tmp_cond_value_68 );
    if ( tmp_cond_truth_68 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_67;
    }
    if ( tmp_cond_truth_68 == 1 )
    {
        goto condexpr_true_68;
    }
    else
    {
        goto condexpr_false_68;
    }
    condexpr_true_68:;
    tmp_subscribed_name_23 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_subscribed_name_23 );
    tmp_subscript_name_23 = const_int_0;
    tmp_type_arg_23 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_23, tmp_subscript_name_23 );
    if ( tmp_type_arg_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_67;
    }
    tmp_metaclass_name_23 = BUILTIN_TYPE1( tmp_type_arg_23 );
    Py_DECREF( tmp_type_arg_23 );
    if ( tmp_metaclass_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_67;
    }
    goto condexpr_end_68;
    condexpr_false_68:;
    tmp_metaclass_name_23 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_23 );
    condexpr_end_68:;
    condexpr_end_67:;
    tmp_bases_name_23 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_bases_name_23 );
    tmp_assign_source_161 = SELECT_METACLASS( tmp_metaclass_name_23, tmp_bases_name_23 );
    Py_DECREF( tmp_metaclass_name_23 );
    if ( tmp_assign_source_161 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_67;
    }
    assert( tmp_class_creation_23__metaclass == NULL );
    tmp_class_creation_23__metaclass = tmp_assign_source_161;

    tmp_key_name_69 = const_str_plain_metaclass;
    tmp_dict_name_69 = tmp_class_creation_23__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_69 );
    tmp_res = PyDict_Contains( tmp_dict_name_69, tmp_key_name_69 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_67;
    }
    tmp_cond_value_69 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_69 = CHECK_IF_TRUE( tmp_cond_value_69 );
    if ( tmp_cond_truth_69 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_67;
    }
    if ( tmp_cond_truth_69 == 1 )
    {
        goto branch_yes_45;
    }
    else
    {
        goto branch_no_45;
    }
    branch_yes_45:;
    tmp_dictdel_dict = tmp_class_creation_23__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_67;
    }
    branch_no_45:;
    tmp_hasattr_source_23 = tmp_class_creation_23__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_23 );
    tmp_hasattr_attr_23 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_23, tmp_hasattr_attr_23 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_67;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_69;
    }
    else
    {
        goto condexpr_false_69;
    }
    condexpr_true_69:;
    tmp_source_name_23 = tmp_class_creation_23__metaclass;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_called_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain___prepare__ );
    if ( tmp_called_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_67;
    }
    tmp_tuple_element_67 = const_str_plain_RequestsDependencyWarning;
    tmp_args_name_45 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_67 );
    PyTuple_SET_ITEM( tmp_args_name_45, 0, tmp_tuple_element_67 );
    tmp_tuple_element_67 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_tuple_element_67 );
    Py_INCREF( tmp_tuple_element_67 );
    PyTuple_SET_ITEM( tmp_args_name_45, 1, tmp_tuple_element_67 );
    tmp_kw_name_45 = tmp_class_creation_23__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_45 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 124;
    tmp_assign_source_162 = CALL_FUNCTION( tmp_called_name_45, tmp_args_name_45, tmp_kw_name_45 );
    Py_DECREF( tmp_called_name_45 );
    Py_DECREF( tmp_args_name_45 );
    if ( tmp_assign_source_162 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_67;
    }
    goto condexpr_end_69;
    condexpr_false_69:;
    tmp_assign_source_162 = PyDict_New();
    condexpr_end_69:;
    assert( tmp_class_creation_23__prepared == NULL );
    tmp_class_creation_23__prepared = tmp_assign_source_162;

    tmp_set_locals = tmp_class_creation_23__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$exceptions_124 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_124, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_69;
    }
    tmp_dictset_value = const_str_digest_3a035decbb1d48c6b204b28e42512076;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_124, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_69;
    }
    tmp_dictset_value = const_str_plain_RequestsDependencyWarning;
    tmp_res = PyObject_SetItem( locals_requests$exceptions_124, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_69;
    }
    tmp_compare_left_23 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_compare_left_23 );
    tmp_compare_right_23 = tmp_class_creation_23__bases_orig;

    CHECK_OBJECT( tmp_compare_right_23 );
    tmp_cmp_NotEq_23 = RICH_COMPARE_BOOL_NE( tmp_compare_left_23, tmp_compare_right_23 );
    if ( tmp_cmp_NotEq_23 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_69;
    }
    if ( tmp_cmp_NotEq_23 == 1 )
    {
        goto branch_yes_46;
    }
    else
    {
        goto branch_no_46;
    }
    branch_yes_46:;
    tmp_dictset_value = tmp_class_creation_23__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$exceptions_124, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_69;
    }
    branch_no_46:;
    tmp_called_name_46 = tmp_class_creation_23__metaclass;

    CHECK_OBJECT( tmp_called_name_46 );
    tmp_tuple_element_68 = const_str_plain_RequestsDependencyWarning;
    tmp_args_name_46 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_68 );
    PyTuple_SET_ITEM( tmp_args_name_46, 0, tmp_tuple_element_68 );
    tmp_tuple_element_68 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_tuple_element_68 );
    Py_INCREF( tmp_tuple_element_68 );
    PyTuple_SET_ITEM( tmp_args_name_46, 1, tmp_tuple_element_68 );
    tmp_tuple_element_68 = locals_requests$exceptions_124;
    Py_INCREF( tmp_tuple_element_68 );
    PyTuple_SET_ITEM( tmp_args_name_46, 2, tmp_tuple_element_68 );
    tmp_kw_name_46 = tmp_class_creation_23__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_46 );
    frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame.f_lineno = 124;
    tmp_assign_source_164 = CALL_FUNCTION( tmp_called_name_46, tmp_args_name_46, tmp_kw_name_46 );
    Py_DECREF( tmp_args_name_46 );
    if ( tmp_assign_source_164 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto try_except_handler_69;
    }
    assert( outline_22_var___class__ == NULL );
    outline_22_var___class__ = tmp_assign_source_164;

    tmp_outline_return_value_23 = outline_22_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_23 );
    Py_INCREF( tmp_outline_return_value_23 );
    goto try_return_handler_69;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_69:;
    Py_DECREF( locals_requests$exceptions_124 );
    locals_requests$exceptions_124 = NULL;
    goto try_return_handler_68;
    // Exception handler code:
    try_except_handler_69:;
    exception_keeper_type_67 = exception_type;
    exception_keeper_value_67 = exception_value;
    exception_keeper_tb_67 = exception_tb;
    exception_keeper_lineno_67 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_requests$exceptions_124 );
    locals_requests$exceptions_124 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_67;
    exception_value = exception_keeper_value_67;
    exception_tb = exception_keeper_tb_67;
    exception_lineno = exception_keeper_lineno_67;

    goto try_except_handler_68;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_68:;
    CHECK_OBJECT( (PyObject *)outline_22_var___class__ );
    Py_DECREF( outline_22_var___class__ );
    outline_22_var___class__ = NULL;

    goto outline_result_23;
    // Exception handler code:
    try_except_handler_68:;
    exception_keeper_type_68 = exception_type;
    exception_keeper_value_68 = exception_value;
    exception_keeper_tb_68 = exception_tb;
    exception_keeper_lineno_68 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_68;
    exception_value = exception_keeper_value_68;
    exception_tb = exception_keeper_tb_68;
    exception_lineno = exception_keeper_lineno_68;

    goto outline_exception_23;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_23:;
    exception_lineno = 124;
    goto try_except_handler_67;
    outline_result_23:;
    tmp_assign_source_163 = tmp_outline_return_value_23;
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsDependencyWarning, tmp_assign_source_163 );
    goto try_end_23;
    // Exception handler code:
    try_except_handler_67:;
    exception_keeper_type_69 = exception_type;
    exception_keeper_value_69 = exception_value;
    exception_keeper_tb_69 = exception_tb;
    exception_keeper_lineno_69 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_23__bases );
    tmp_class_creation_23__bases = NULL;

    Py_XDECREF( tmp_class_creation_23__class_decl_dict );
    tmp_class_creation_23__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_23__metaclass );
    tmp_class_creation_23__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_23__prepared );
    tmp_class_creation_23__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_69;
    exception_value = exception_keeper_value_69;
    exception_tb = exception_keeper_tb_69;
    exception_lineno = exception_keeper_lineno_69;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_31a02c8d82d89f6e34595f6e8506edd1 );
#endif
    popFrameStack();

    assertFrameObject( frame_31a02c8d82d89f6e34595f6e8506edd1 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_31a02c8d82d89f6e34595f6e8506edd1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_31a02c8d82d89f6e34595f6e8506edd1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_31a02c8d82d89f6e34595f6e8506edd1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_31a02c8d82d89f6e34595f6e8506edd1, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__bases );
    Py_DECREF( tmp_class_creation_23__bases );
    tmp_class_creation_23__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__class_decl_dict );
    Py_DECREF( tmp_class_creation_23__class_decl_dict );
    tmp_class_creation_23__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__metaclass );
    Py_DECREF( tmp_class_creation_23__metaclass );
    tmp_class_creation_23__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__prepared );
    Py_DECREF( tmp_class_creation_23__prepared );
    tmp_class_creation_23__prepared = NULL;


    return MOD_RETURN_VALUE( module_requests$exceptions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
