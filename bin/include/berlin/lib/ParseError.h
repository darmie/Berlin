// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_berlin_lib_ParseError
#define INCLUDED_berlin_lib_ParseError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(berlin,lib,ParseError)

namespace berlin{
namespace lib{


class HXCPP_CLASS_ATTRIBUTES ParseError_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ParseError_obj OBJ_;
		ParseError_obj();

	public:
		enum { _hx_ClassId = 0x2efffdd8 };

		void __construct(int pos,int line,int col,::cpp::VirtualArray nt, ::Dynamic chars);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="berlin.lib.ParseError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"berlin.lib.ParseError"); }
		static hx::ObjectPtr< ParseError_obj > __new(int pos,int line,int col,::cpp::VirtualArray nt, ::Dynamic chars);
		static hx::ObjectPtr< ParseError_obj > __alloc(hx::Ctx *_hx_ctx,int pos,int line,int col,::cpp::VirtualArray nt, ::Dynamic chars);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ParseError_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ParseError","\xb5","\x16","\xbc","\x93"); }

		int pos;
		int line;
		int col;
		::cpp::VirtualArray nt;
		 ::Dynamic chars;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace berlin
} // end namespace lib

#endif /* INCLUDED_berlin_lib_ParseError */ 
