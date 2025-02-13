// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_berlin_lib_RawError
#define INCLUDED_berlin_lib_RawError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(berlin,lib,ParseError)
HX_DECLARE_CLASS2(berlin,lib,RawError)

namespace berlin{
namespace lib{


class HXCPP_CLASS_ATTRIBUTES RawError_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef RawError_obj OBJ_;
		RawError_obj();

	public:
		enum { _hx_ClassId = 0x58508143 };

		void __construct(int pos,::cpp::VirtualArray nonterminals,::cpp::VirtualArray failedChars, ::Dynamic currentNT);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="berlin.lib.RawError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"berlin.lib.RawError"); }
		static hx::ObjectPtr< RawError_obj > __new(int pos,::cpp::VirtualArray nonterminals,::cpp::VirtualArray failedChars, ::Dynamic currentNT);
		static hx::ObjectPtr< RawError_obj > __alloc(hx::Ctx *_hx_ctx,int pos,::cpp::VirtualArray nonterminals,::cpp::VirtualArray failedChars, ::Dynamic currentNT);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RawError_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("RawError","\xe0","\xb8","\x99","\xae"); }

		int pos;
		::cpp::VirtualArray nonterminals;
		::cpp::VirtualArray failedChars;
		 ::Dynamic currentNT;
		 ::berlin::lib::ParseError toParseError(::String input);
		::Dynamic toParseError_dyn();

};

} // end namespace berlin
} // end namespace lib

#endif /* INCLUDED_berlin_lib_RawError */ 
