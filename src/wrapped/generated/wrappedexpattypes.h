/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.2.0.18) *
 *******************************************************************/
#ifndef __wrappedexpatTYPES_H_
#define __wrappedexpatTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFpp_t)(void*, void*);
typedef void (*vFppp_t)(void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(XML_SetAttlistDeclHandler, vFpp_t) \
	GO(XML_SetCharacterDataHandler, vFpp_t) \
	GO(XML_SetCommentHandler, vFpp_t) \
	GO(XML_SetDefaultHandler, vFpp_t) \
	GO(XML_SetDefaultHandlerExpand, vFpp_t) \
	GO(XML_SetElementDeclHandler, vFpp_t) \
	GO(XML_SetEndCdataSectionHandler, vFpp_t) \
	GO(XML_SetEndDoctypeDeclHandler, vFpp_t) \
	GO(XML_SetEndElementHandler, vFpp_t) \
	GO(XML_SetEndNamespaceDeclHandler, vFpp_t) \
	GO(XML_SetEntityDeclHandler, vFpp_t) \
	GO(XML_SetExternalEntityRefHandler, vFpp_t) \
	GO(XML_SetNotStandaloneHandler, vFpp_t) \
	GO(XML_SetNotationDeclHandler, vFpp_t) \
	GO(XML_SetProcessingInstructionHandler, vFpp_t) \
	GO(XML_SetSkippedEntityHandler, vFpp_t) \
	GO(XML_SetStartCdataSectionHandler, vFpp_t) \
	GO(XML_SetStartDoctypeDeclHandler, vFpp_t) \
	GO(XML_SetStartElementHandler, vFpp_t) \
	GO(XML_SetStartNamespaceDeclHandler, vFpp_t) \
	GO(XML_SetUnparsedEntityDeclHandler, vFpp_t) \
	GO(XML_SetXmlDeclHandler, vFpp_t) \
	GO(XML_SetElementHandler, vFppp_t) \
	GO(XML_SetNamespaceDeclHandler, vFppp_t) \
	GO(XML_SetUnknownEncodingHandler, vFppp_t)

#endif // __wrappedexpatTYPES_H_
