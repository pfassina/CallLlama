/* Generated code for Python source for module 'urllib3.util.response'
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

/* The _module_urllib3$util$response is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$response;
PyDictObject *moduledict_urllib3$util$response;

/* The module constants used, if any. */
extern PyObject *const_str_digest_2833c2e99385c7d1c67d0068a26ec387;
static PyObject *const_str_digest_c41e1760d5eb8bfb7e5c669afe1ecb08;
static PyObject *const_str_plain_HTTPMessage;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_closed;
static PyObject *const_str_digest_012cd67bd37432d9da7a50ba63750ba4;
static PyObject *const_str_digest_b7000635b6f011797c272ddd6445bae7;
static PyObject *const_str_plain_get_payload;
extern PyObject *const_str_plain_isclosed;
extern PyObject *const_str_plain_assert_header_parsing;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_4a7b481487540504e51b1645e2267e09;
extern PyObject *const_tuple_str_plain_obj_tuple;
static PyObject *const_str_digest_ddc284fa04747aa4347806dbe146787c;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_plain_unparsed_data;
extern PyObject *const_str_plain_http_client;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain_is_response_to_head;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_HeaderParsingError;
static PyObject *const_tuple_str_plain_response_str_plain_method_tuple;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain_is_fp_closed;
static PyObject *const_str_digest_a8815a886f9deda41de85e6552adf44c;
extern PyObject *const_str_plain_fp;
static PyObject *const_str_digest_b66ce613e9e3a959db89f327d918deda;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_89096609a8338db0bdf770e925e86836_tuple;
extern PyObject *const_str_plain_httplib;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain__method;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_defects;
extern PyObject *const_str_plain_format;
extern PyObject *const_tuple_str_plain_http_client_tuple;
extern PyObject *const_str_plain_HEAD;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_tuple_str_plain_HeaderParsingError_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_ac4742f1cfe4c3d6e156327254686012;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_c41e1760d5eb8bfb7e5c669afe1ecb08 = UNSTREAM_STRING( &constant_bin[ 928331 ], 65, 0 );
    const_str_plain_HTTPMessage = UNSTREAM_STRING( &constant_bin[ 801276 ], 11, 1 );
    const_str_digest_012cd67bd37432d9da7a50ba63750ba4 = UNSTREAM_STRING( &constant_bin[ 928396 ], 21, 0 );
    const_str_digest_b7000635b6f011797c272ddd6445bae7 = UNSTREAM_STRING( &constant_bin[ 928417 ], 30, 0 );
    const_str_plain_get_payload = UNSTREAM_STRING( &constant_bin[ 928447 ], 11, 1 );
    const_str_digest_4a7b481487540504e51b1645e2267e09 = UNSTREAM_STRING( &constant_bin[ 928458 ], 41, 0 );
    const_str_digest_ddc284fa04747aa4347806dbe146787c = UNSTREAM_STRING( &constant_bin[ 928499 ], 34, 0 );
    const_tuple_str_plain_response_str_plain_method_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_response_str_plain_method_tuple, 0, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_str_plain_response_str_plain_method_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    const_str_digest_a8815a886f9deda41de85e6552adf44c = UNSTREAM_STRING( &constant_bin[ 928533 ], 116, 0 );
    const_str_digest_b66ce613e9e3a959db89f327d918deda = UNSTREAM_STRING( &constant_bin[ 928649 ], 336, 0 );
    const_tuple_89096609a8338db0bdf770e925e86836_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_89096609a8338db0bdf770e925e86836_tuple, 0, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_89096609a8338db0bdf770e925e86836_tuple, 1, const_str_plain_defects ); Py_INCREF( const_str_plain_defects );
    PyTuple_SET_ITEM( const_tuple_89096609a8338db0bdf770e925e86836_tuple, 2, const_str_plain_get_payload ); Py_INCREF( const_str_plain_get_payload );
    PyTuple_SET_ITEM( const_tuple_89096609a8338db0bdf770e925e86836_tuple, 3, const_str_plain_unparsed_data ); Py_INCREF( const_str_plain_unparsed_data );
    const_str_plain__method = UNSTREAM_STRING( &constant_bin[ 811468 ], 7, 1 );
    const_tuple_str_plain_HeaderParsingError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HeaderParsingError_tuple, 0, const_str_plain_HeaderParsingError ); Py_INCREF( const_str_plain_HeaderParsingError );
    const_str_digest_ac4742f1cfe4c3d6e156327254686012 = UNSTREAM_STRING( &constant_bin[ 928985 ], 176, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$response( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1f5bafbeb6edb6a82f6e0a73c53c1f1a;
static PyCodeObject *codeobj_911bb0109fe0df341d6ccfd905352c72;
static PyCodeObject *codeobj_073bfb5036f905a8b9a78b6d1fe93cda;
static PyCodeObject *codeobj_5317b9eca007944931156e6280a89cae;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c41e1760d5eb8bfb7e5c669afe1ecb08;
    codeobj_1f5bafbeb6edb6a82f6e0a73c53c1f1a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b7000635b6f011797c272ddd6445bae7, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_911bb0109fe0df341d6ccfd905352c72 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_assert_header_parsing, 38, const_tuple_89096609a8338db0bdf770e925e86836_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_073bfb5036f905a8b9a78b6d1fe93cda = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_fp_closed, 7, const_tuple_str_plain_obj_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5317b9eca007944931156e6280a89cae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_response_to_head, 69, const_tuple_str_plain_response_str_plain_method_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$util$response$$$function_1_is_fp_closed(  );


static PyObject *MAKE_FUNCTION_urllib3$util$response$$$function_2_assert_header_parsing(  );


static PyObject *MAKE_FUNCTION_urllib3$util$response$$$function_3_is_response_to_head(  );


// The module function definitions.
static PyObject *impl_urllib3$util$response$$$function_1_is_fp_closed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_073bfb5036f905a8b9a78b6d1fe93cda = NULL;

    struct Nuitka_FrameObject *frame_073bfb5036f905a8b9a78b6d1fe93cda;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_073bfb5036f905a8b9a78b6d1fe93cda, codeobj_073bfb5036f905a8b9a78b6d1fe93cda, module_urllib3$util$response, sizeof(void *) );
    frame_073bfb5036f905a8b9a78b6d1fe93cda = cache_frame_073bfb5036f905a8b9a78b6d1fe93cda;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_073bfb5036f905a8b9a78b6d1fe93cda );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_073bfb5036f905a8b9a78b6d1fe93cda ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_instance_1 = par_obj;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_073bfb5036f905a8b9a78b6d1fe93cda->m_frame.f_lineno = 18;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isclosed );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$response$$$function_1_is_fp_closed );
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_073bfb5036f905a8b9a78b6d1fe93cda, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_073bfb5036f905a8b9a78b6d1fe93cda, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "o";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 15;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_073bfb5036f905a8b9a78b6d1fe93cda->m_frame) frame_073bfb5036f905a8b9a78b6d1fe93cda->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_3;
    branch_no_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$response$$$function_1_is_fp_closed );
    return NULL;
    // End of try:
    try_end_2:;
    // Tried code:
    tmp_source_name_1 = par_obj;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "o";
        goto try_except_handler_4;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_closed );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "o";
        goto try_except_handler_4;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$response$$$function_1_is_fp_closed );
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_073bfb5036f905a8b9a78b6d1fe93cda, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_073bfb5036f905a8b9a78b6d1fe93cda, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_2 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_2 = PyExc_AttributeError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "o";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 22;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_073bfb5036f905a8b9a78b6d1fe93cda->m_frame) frame_073bfb5036f905a8b9a78b6d1fe93cda->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_5;
    branch_no_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$response$$$function_1_is_fp_closed );
    return NULL;
    // End of try:
    try_end_4:;
    // Tried code:
    tmp_source_name_2 = par_obj;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        type_description_1 = "o";
        goto try_except_handler_6;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fp );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "o";
        goto try_except_handler_6;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_return_value = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$response$$$function_1_is_fp_closed );
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_3 );
    exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_3 );
    exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_3 );

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_073bfb5036f905a8b9a78b6d1fe93cda, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_073bfb5036f905a8b9a78b6d1fe93cda, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    tmp_compare_left_3 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_3 = PyExc_AttributeError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "o";
        goto try_except_handler_7;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 28;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_073bfb5036f905a8b9a78b6d1fe93cda->m_frame) frame_073bfb5036f905a8b9a78b6d1fe93cda->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_7;
    branch_no_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$response$$$function_1_is_fp_closed );
    return NULL;
    // End of try:
    try_end_6:;
    tmp_make_exception_arg_1 = const_str_digest_4a7b481487540504e51b1645e2267e09;
    frame_073bfb5036f905a8b9a78b6d1fe93cda->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 35;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_073bfb5036f905a8b9a78b6d1fe93cda );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_073bfb5036f905a8b9a78b6d1fe93cda );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_073bfb5036f905a8b9a78b6d1fe93cda );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_073bfb5036f905a8b9a78b6d1fe93cda, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_073bfb5036f905a8b9a78b6d1fe93cda->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_073bfb5036f905a8b9a78b6d1fe93cda, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_073bfb5036f905a8b9a78b6d1fe93cda,
        type_description_1,
        par_obj
    );


    // Release cached frame.
    if ( frame_073bfb5036f905a8b9a78b6d1fe93cda == cache_frame_073bfb5036f905a8b9a78b6d1fe93cda )
    {
        Py_DECREF( frame_073bfb5036f905a8b9a78b6d1fe93cda );
    }
    cache_frame_073bfb5036f905a8b9a78b6d1fe93cda = NULL;

    assertFrameObject( frame_073bfb5036f905a8b9a78b6d1fe93cda );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$response$$$function_1_is_fp_closed );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_obj );
    par_obj = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_obj );
    par_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$response$$$function_1_is_fp_closed );
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


static PyObject *impl_urllib3$util$response$$$function_2_assert_header_parsing( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_headers = python_pars[ 0 ];
    PyObject *var_defects = NULL;
    PyObject *var_get_payload = NULL;
    PyObject *var_unparsed_data = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_make_exception_arg_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_911bb0109fe0df341d6ccfd905352c72 = NULL;

    struct Nuitka_FrameObject *frame_911bb0109fe0df341d6ccfd905352c72;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_911bb0109fe0df341d6ccfd905352c72, codeobj_911bb0109fe0df341d6ccfd905352c72, module_urllib3$util$response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_911bb0109fe0df341d6ccfd905352c72 = cache_frame_911bb0109fe0df341d6ccfd905352c72;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_911bb0109fe0df341d6ccfd905352c72 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_911bb0109fe0df341d6ccfd905352c72 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_headers;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain_httplib );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_httplib );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "httplib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_HTTPMessage );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = const_str_digest_ddc284fa04747aa4347806dbe146787c;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_format );
    assert( !(tmp_called_name_1 == NULL) );
    tmp_type_arg_1 = par_headers;

    if ( tmp_type_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 56;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_911bb0109fe0df341d6ccfd905352c72->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_911bb0109fe0df341d6ccfd905352c72->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 55;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_getattr_target_1 = par_headers;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain_defects;
    tmp_getattr_default_1 = Py_None;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_defects == NULL );
    var_defects = tmp_assign_source_1;

    tmp_getattr_target_2 = par_headers;

    if ( tmp_getattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_2 = const_str_plain_get_payload;
    tmp_getattr_default_2 = Py_None;
    tmp_assign_source_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_get_payload == NULL );
    var_get_payload = tmp_assign_source_2;

    tmp_assign_source_3 = Py_None;
    assert( var_unparsed_data == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_unparsed_data = tmp_assign_source_3;

    tmp_cond_value_1 = var_get_payload;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_2 = var_get_payload;

    CHECK_OBJECT( tmp_called_name_2 );
    frame_911bb0109fe0df341d6ccfd905352c72->m_frame.f_lineno = 63;
    tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_unparsed_data;
        var_unparsed_data = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_or_left_value_1 = var_defects;

    if ( tmp_or_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "defects" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_or_right_value_1 = var_unparsed_data;

    CHECK_OBJECT( tmp_or_right_value_1 );
    tmp_cond_value_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_2 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain_HeaderParsingError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HeaderParsingError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HeaderParsingError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_defects;
    tmp_dict_value_1 = var_defects;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "defects" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_unparsed_data;
    tmp_dict_value_2 = var_unparsed_data;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_911bb0109fe0df341d6ccfd905352c72->m_frame.f_lineno = 66;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 66;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_911bb0109fe0df341d6ccfd905352c72 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_911bb0109fe0df341d6ccfd905352c72 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_911bb0109fe0df341d6ccfd905352c72, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_911bb0109fe0df341d6ccfd905352c72->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_911bb0109fe0df341d6ccfd905352c72, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_911bb0109fe0df341d6ccfd905352c72,
        type_description_1,
        par_headers,
        var_defects,
        var_get_payload,
        var_unparsed_data
    );


    // Release cached frame.
    if ( frame_911bb0109fe0df341d6ccfd905352c72 == cache_frame_911bb0109fe0df341d6ccfd905352c72 )
    {
        Py_DECREF( frame_911bb0109fe0df341d6ccfd905352c72 );
    }
    cache_frame_911bb0109fe0df341d6ccfd905352c72 = NULL;

    assertFrameObject( frame_911bb0109fe0df341d6ccfd905352c72 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$response$$$function_2_assert_header_parsing );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( var_defects );
    var_defects = NULL;

    Py_XDECREF( var_get_payload );
    var_get_payload = NULL;

    Py_XDECREF( var_unparsed_data );
    var_unparsed_data = NULL;

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

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( var_defects );
    var_defects = NULL;

    Py_XDECREF( var_get_payload );
    var_get_payload = NULL;

    Py_XDECREF( var_unparsed_data );
    var_unparsed_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$response$$$function_2_assert_header_parsing );
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


static PyObject *impl_urllib3$util$response$$$function_3_is_response_to_head( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_response = python_pars[ 0 ];
    PyObject *var_method = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_5317b9eca007944931156e6280a89cae = NULL;

    struct Nuitka_FrameObject *frame_5317b9eca007944931156e6280a89cae;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5317b9eca007944931156e6280a89cae, codeobj_5317b9eca007944931156e6280a89cae, module_urllib3$util$response, sizeof(void *)+sizeof(void *) );
    frame_5317b9eca007944931156e6280a89cae = cache_frame_5317b9eca007944931156e6280a89cae;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5317b9eca007944931156e6280a89cae );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5317b9eca007944931156e6280a89cae ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_response;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__method );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_method == NULL );
    var_method = tmp_assign_source_1;

    tmp_isinstance_inst_1 = var_method;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_compexpr_left_1 = var_method;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_int_pos_3;
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_instance_1 = var_method;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_5317b9eca007944931156e6280a89cae->m_frame.f_lineno = 81;
    tmp_compexpr_left_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_str_plain_HEAD;
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5317b9eca007944931156e6280a89cae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5317b9eca007944931156e6280a89cae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5317b9eca007944931156e6280a89cae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5317b9eca007944931156e6280a89cae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5317b9eca007944931156e6280a89cae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5317b9eca007944931156e6280a89cae, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5317b9eca007944931156e6280a89cae,
        type_description_1,
        par_response,
        var_method
    );


    // Release cached frame.
    if ( frame_5317b9eca007944931156e6280a89cae == cache_frame_5317b9eca007944931156e6280a89cae )
    {
        Py_DECREF( frame_5317b9eca007944931156e6280a89cae );
    }
    cache_frame_5317b9eca007944931156e6280a89cae = NULL;

    assertFrameObject( frame_5317b9eca007944931156e6280a89cae );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$response$$$function_3_is_response_to_head );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_method );
    var_method = NULL;

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

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_method );
    var_method = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$response$$$function_3_is_response_to_head );
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



static PyObject *MAKE_FUNCTION_urllib3$util$response$$$function_1_is_fp_closed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$response$$$function_1_is_fp_closed,
        const_str_plain_is_fp_closed,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_073bfb5036f905a8b9a78b6d1fe93cda,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$response,
        const_str_digest_a8815a886f9deda41de85e6552adf44c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$response$$$function_2_assert_header_parsing(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$response$$$function_2_assert_header_parsing,
        const_str_plain_assert_header_parsing,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_911bb0109fe0df341d6ccfd905352c72,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$response,
        const_str_digest_b66ce613e9e3a959db89f327d918deda,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$response$$$function_3_is_response_to_head(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$response$$$function_3_is_response_to_head,
        const_str_plain_is_response_to_head,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5317b9eca007944931156e6280a89cae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$response,
        const_str_digest_ac4742f1cfe4c3d6e156327254686012,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$response =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.response",   /* m_name */
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

MOD_INIT_DECL( urllib3$util$response )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$response );
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
    puts("urllib3.util.response: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.response: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.response: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$response" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$response = Py_InitModule4(
        "urllib3.util.response",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$util$response = PyModule_Create( &mdef_urllib3$util$response );
#endif

    moduledict_urllib3$util$response = MODULE_DICT( module_urllib3$util$response );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$response,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$response,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$response,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$util$response );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_012cd67bd37432d9da7a50ba63750ba4, module_urllib3$util$response );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    struct Nuitka_FrameObject *frame_1f5bafbeb6edb6a82f6e0a73c53c1f1a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c41e1760d5eb8bfb7e5c669afe1ecb08;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_1f5bafbeb6edb6a82f6e0a73c53c1f1a = MAKE_MODULE_FRAME( codeobj_1f5bafbeb6edb6a82f6e0a73c53c1f1a, module_urllib3$util$response );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1f5bafbeb6edb6a82f6e0a73c53c1f1a );
    assert( Py_REFCNT( frame_1f5bafbeb6edb6a82f6e0a73c53c1f1a ) == 2 );

    // Framed code:
    frame_1f5bafbeb6edb6a82f6e0a73c53c1f1a->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( !(tmp_import_name_from_1 == NULL) );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_name_name_1 = const_str_digest_2833c2e99385c7d1c67d0068a26ec387;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$response;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_http_client_tuple;
    tmp_level_name_1 = const_int_pos_2;
    frame_1f5bafbeb6edb6a82f6e0a73c53c1f1a->m_frame.f_lineno = 2;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_http_client,
            const_int_pos_2
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_http_client );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain_httplib, tmp_assign_source_5 );
    tmp_name_name_2 = const_str_plain_exceptions;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$response;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_HeaderParsingError_tuple;
    tmp_level_name_2 = const_int_pos_2;
    frame_1f5bafbeb6edb6a82f6e0a73c53c1f1a->m_frame.f_lineno = 4;
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
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_HeaderParsingError,
            const_int_pos_2
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_HeaderParsingError );
    }

    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain_HeaderParsingError, tmp_assign_source_6 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f5bafbeb6edb6a82f6e0a73c53c1f1a );
#endif
    popFrameStack();

    assertFrameObject( frame_1f5bafbeb6edb6a82f6e0a73c53c1f1a );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f5bafbeb6edb6a82f6e0a73c53c1f1a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f5bafbeb6edb6a82f6e0a73c53c1f1a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f5bafbeb6edb6a82f6e0a73c53c1f1a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f5bafbeb6edb6a82f6e0a73c53c1f1a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_7 = MAKE_FUNCTION_urllib3$util$response$$$function_1_is_fp_closed(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain_is_fp_closed, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_urllib3$util$response$$$function_2_assert_header_parsing(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain_assert_header_parsing, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_urllib3$util$response$$$function_3_is_response_to_head(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain_is_response_to_head, tmp_assign_source_9 );

    return MOD_RETURN_VALUE( module_urllib3$util$response );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
