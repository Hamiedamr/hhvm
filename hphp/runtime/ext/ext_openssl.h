/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-2013 Facebook, Inc. (http://www.facebook.com)     |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef incl_HPHP_EXT_OPENSSL_H_
#define incl_HPHP_EXT_OPENSSL_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/runtime/base/base_includes.h"

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

bool f_openssl_csr_export_to_file(CVarRef csr, CStrRef outfilename, bool notext = true);
bool f_openssl_csr_export(CVarRef csr, VRefParam out, bool notext = true);
Variant f_openssl_csr_get_public_key(CVarRef csr);
Variant f_openssl_csr_get_subject(CVarRef csr, bool use_shortnames = true);
Variant f_openssl_csr_new(CArrRef dn, VRefParam privkey, CVarRef configargs = null_variant, CVarRef extraattribs = null_variant);
Variant f_openssl_csr_sign(CVarRef csr, CVarRef cacert, CVarRef priv_key, int days, CVarRef configargs = null_variant, int serial = 0);
Variant f_openssl_error_string();
bool f_openssl_open(CStrRef sealed_data, VRefParam open_data, CStrRef env_key, CVarRef priv_key_id);
bool f_openssl_pkcs12_export_to_file(CVarRef x509, CStrRef filename, CVarRef priv_key, CStrRef pass, CVarRef args = null_variant);
bool f_openssl_pkcs12_export(CVarRef x509, VRefParam out, CVarRef priv_key, CStrRef pass, CVarRef args = null_variant);
bool f_openssl_pkcs12_read(CStrRef pkcs12, VRefParam certs, CStrRef pass);
bool f_openssl_pkcs7_decrypt(CStrRef infilename, CStrRef outfilename, CVarRef recipcert, CVarRef recipkey = null_variant);
bool f_openssl_pkcs7_encrypt(CStrRef infilename, CStrRef outfilename, CVarRef recipcerts, CArrRef headers, int flags = 0, int cipherid = k_OPENSSL_CIPHER_RC2_40);
bool f_openssl_pkcs7_sign(CStrRef infilename, CStrRef outfilename, CVarRef signcert, CVarRef privkey, CVarRef headers, int flags = k_PKCS7_DETACHED, CStrRef extracerts = null_string);
Variant f_openssl_pkcs7_verify(CStrRef filename, int flags, CStrRef outfilename = null_string, CArrRef cainfo = null_array, CStrRef extracerts = null_string, CStrRef content = null_string);
bool f_openssl_pkey_export_to_file(CVarRef key, CStrRef outfilename, CStrRef passphrase = null_string, CVarRef configargs = null_variant);
bool f_openssl_pkey_export(CVarRef key, VRefParam out, CStrRef passphrase = null_string, CVarRef configargs = null_variant);
void f_openssl_pkey_free(CResRef key);
void f_openssl_free_key(CResRef key);
Array f_openssl_pkey_get_details(CResRef key);
Variant f_openssl_pkey_get_private(CVarRef key, CStrRef passphrase = null_string);
Variant f_openssl_get_privatekey(CVarRef key, CStrRef passphrase = null_string);
Variant f_openssl_pkey_get_public(CVarRef certificate);
Variant f_openssl_get_publickey(CVarRef certificate);
Resource f_openssl_pkey_new(CVarRef configargs = null_variant);
bool f_openssl_private_decrypt(CStrRef data, VRefParam decrypted, CVarRef key, int padding = k_OPENSSL_PKCS1_PADDING);
bool f_openssl_private_encrypt(CStrRef data, VRefParam crypted, CVarRef key, int padding = k_OPENSSL_PKCS1_PADDING);
bool f_openssl_public_decrypt(CStrRef data, VRefParam decrypted, CVarRef key, int padding = k_OPENSSL_PKCS1_PADDING);
bool f_openssl_public_encrypt(CStrRef data, VRefParam crypted, CVarRef key, int padding = k_OPENSSL_PKCS1_PADDING);
Variant f_openssl_seal(CStrRef data, VRefParam sealed_data, VRefParam env_keys, CArrRef pub_key_ids);
bool f_openssl_sign(CStrRef data, VRefParam signature, CVarRef priv_key_id, int signature_alg = k_OPENSSL_ALGO_SHA1);
Variant f_openssl_verify(CStrRef data, CStrRef signature, CVarRef pub_key_id, int signature_alg = k_OPENSSL_ALGO_SHA1);
bool f_openssl_x509_check_private_key(CVarRef cert, CVarRef key);
int64_t f_openssl_x509_checkpurpose(CVarRef x509cert, int purpose, CArrRef cainfo = null_array, CStrRef untrustedfile = null_string);
bool f_openssl_x509_export_to_file(CVarRef x509, CStrRef outfilename, bool notext = true);
bool f_openssl_x509_export(CVarRef x509, VRefParam output, bool notext = true);
void f_openssl_x509_free(CResRef x509cert);
Variant f_openssl_x509_parse(CVarRef x509cert, bool shortnames = true);
Variant f_openssl_x509_read(CVarRef x509certdata);
Variant f_openssl_random_pseudo_bytes(int length, VRefParam crypto_strong = false);
Variant f_openssl_cipher_iv_length(CStrRef method);
Variant f_openssl_encrypt(CStrRef data, CStrRef method, CStrRef password, int options = 0, CStrRef iv = null_string);
Variant f_openssl_decrypt(CStrRef data, CStrRef method, CStrRef password, int options = 0, CStrRef iv = null_string);
Variant f_openssl_digest(CStrRef data, CStrRef method, bool raw_output = false);
Array f_openssl_get_cipher_methods(bool aliases = false);
Array f_openssl_get_md_methods(bool aliases = false);
extern const int64_t k_OPENSSL_RAW_DATA;
extern const int64_t k_OPENSSL_ZERO_PADDING;

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_OPENSSL_H_
