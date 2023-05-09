#if HAVE_CONFIG_H
# include "config.h"
#endif

#include <libtasn1.h>

const asn1_static_node gnutls_asn1_tab[] = {
  { "GNUTLS", 536872976, NULL },
  { NULL, 1073741836, NULL },
  { "RSAPublicKey", 1610612741, NULL },
  { "modulus", 1073741827, NULL },
  { "publicExponent", 3, NULL },
  { "RSAPrivateKey", 1610612741, NULL },
  { "version", 1073741827, NULL },
  { "modulus", 1073741827, NULL },
  { "publicExponent", 1073741827, NULL },
  { "privateExponent", 1073741827, NULL },
  { "prime1", 1073741827, NULL },
  { "prime2", 1073741827, NULL },
  { "exponent1", 1073741827, NULL },
  { "exponent2", 1073741827, NULL },
  { "coefficient", 1073741827, NULL },
  { "otherPrimeInfos", 16386, "OtherPrimeInfos"},
  { "ProvableSeed", 1610612741, NULL },
  { "algorithm", 1073741836, NULL },
  { "seed", 7, NULL },
  { "OtherPrimeInfos", 1612709899, NULL },
  { "MAX", 1074266122, "1"},
  { NULL, 2, "OtherPrimeInfo"},
  { "OtherPrimeInfo", 1610612741, NULL },
  { "prime", 1073741827, NULL },
  { "exponent", 1073741827, NULL },
  { "coefficient", 3, NULL },
  { "AlgorithmIdentifier", 1610612741, NULL },
  { "algorithm", 1073741836, NULL },
  { "parameters", 541081613, NULL },
  { "algorithm", 1, NULL },
  { "DigestInfo", 1610612741, NULL },
  { "digestAlgorithm", 1073741826, "DigestAlgorithmIdentifier"},
  { "digest", 7, NULL },
  { "DigestAlgorithmIdentifier", 1073741826, "AlgorithmIdentifier"},
  { "DSAPublicKey", 1073741827, NULL },
  { "DSAParameters", 1610612741, NULL },
  { "p", 1073741827, NULL },
  { "q", 1073741827, NULL },
  { "g", 3, NULL },
  { "DSASignatureValue", 1610612741, NULL },
  { "r", 1073741827, NULL },
  { "s", 3, NULL },
  { "DSAPrivateKey", 1610612741, NULL },
  { "version", 1073741827, NULL },
  { "p", 1073741827, NULL },
  { "q", 1073741827, NULL },
  { "g", 1073741827, NULL },
  { "Y", 1073741827, NULL },
  { "priv", 3, NULL },
  { "DHParameter", 1610612741, NULL },
  { "prime", 1073741827, NULL },
  { "base", 1073741827, NULL },
  { "privateValueLength", 16387, NULL },
  { "pkcs-11-ec-Parameters", 1610612754, NULL },
  { "oId", 1073741836, NULL },
  { "curveName", 31, NULL },
  { "ECParameters", 1610612754, NULL },
  { "namedCurve", 12, NULL },
  { "ECPrivateKey", 1610612741, NULL },
  { "Version", 1073741827, NULL },
  { "privateKey", 1073741831, NULL },
  { "parameters", 1610637314, "ECParameters"},
  { NULL, 2056, "0"},
  { "publicKey", 536895494, NULL },
  { NULL, 2056, "1"},
  { "PrincipalName", 1610612741, NULL },
  { "name-type", 1610620931, NULL },
  { NULL, 2056, "0"},
  { "name-string", 536879115, NULL },
  { NULL, 1073743880, "1"},
  { NULL, 27, NULL },
  { "KRB5PrincipalName", 1610612741, NULL },
  { "realm", 1610620955, NULL },
  { NULL, 2056, "0"},
  { "principalName", 536879106, "PrincipalName"},
  { NULL, 2056, "1"},
  { "RSAPSSParameters", 1610612741, NULL },
  { "hashAlgorithm", 1610637314, "AlgorithmIdentifier"},
  { NULL, 2056, "0"},
  { "maskGenAlgorithm", 1610637314, "AlgorithmIdentifier"},
  { NULL, 2056, "1"},
  { "saltLength", 1610653699, NULL },
  { NULL, 1073741833, "20"},
  { NULL, 2056, "2"},
  { "trailerField", 536911875, NULL },
  { NULL, 1073741833, "1"},
  { NULL, 2056, "3"},
  { "GOSTParameters", 1610612741, NULL },
  { "publicKeyParamSet", 1073741836, NULL },
  { "digestParamSet", 16396, NULL },
  { "GOSTParametersOld", 1610612741, NULL },
  { "publicKeyParamSet", 1073741836, NULL },
  { "digestParamSet", 1073741836, NULL },
  { "encryptionParamSet", 16396, NULL },
  { "GOSTPrivateKey", 1073741831, NULL },
  { "GOSTPrivateKeyOld", 1073741827, NULL },
  { "IssuerSignTool", 1610612741, NULL },
  { "signTool", 1073741858, NULL },
  { "cATool", 1073741858, NULL },
  { "signToolCert", 1073741858, NULL },
  { "cAToolCert", 34, NULL },
  { "Gost28147-89-EncryptedKey", 1610612741, NULL },
  { "encryptedKey", 1073741831, NULL },
  { "maskKey", 1610637319, NULL },
  { NULL, 4104, "0"},
  { "macKey", 7, NULL },
  { "SubjectPublicKeyInfo", 1610612741, NULL },
  { "algorithm", 1073741826, "AlgorithmIdentifier"},
  { "subjectPublicKey", 6, NULL },
  { "GostR3410-TransportParameters", 1610612741, NULL },
  { "encryptionParamSet", 1073741836, NULL },
  { "ephemeralPublicKey", 1610637314, "SubjectPublicKeyInfo"},
  { NULL, 4104, "0"},
  { "ukm", 7, NULL },
  { "GostR3410-KeyTransport", 1610612741, NULL },
  { "sessionEncryptedKey", 1073741826, "Gost28147-89-EncryptedKey"},
  { "transportParameters", 536895490, "GostR3410-TransportParameters"},
  { NULL, 4104, "0"},
  { "TPMKey", 536870917, NULL },
  { "type", 1073741836, NULL },
  { "emptyAuth", 1610637316, NULL },
  { NULL, 2056, "0"},
  { "parent", 1073741827, NULL },
  { "pubkey", 1073741831, NULL },
  { "privkey", 7, NULL },
  { NULL, 0, NULL }
};
