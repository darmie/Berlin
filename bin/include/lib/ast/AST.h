// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_lib_ast_AST
#define INCLUDED_lib_ast_AST

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lib,ast,AST)

namespace lib{
namespace ast{


class HXCPP_CLASS_ATTRIBUTES AST_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AST_obj OBJ_;
		AST_obj();

	public:
		enum { _hx_ClassId = 0x5cdbfc25 };

		void __construct(::String val);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lib.ast.AST")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lib.ast.AST"); }
		static hx::ObjectPtr< AST_obj > __new(::String val);
		static hx::ObjectPtr< AST_obj > __alloc(hx::Ctx *_hx_ctx,::String val);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AST_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AST","\x22","\x9b","\x31","\x00"); }

		::String value;
		void echo();
		::Dynamic echo_dyn();

};

} // end namespace lib
} // end namespace ast

#endif /* INCLUDED_lib_ast_AST */ 
