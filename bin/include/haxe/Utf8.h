// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_haxe_Utf8
#define INCLUDED_haxe_Utf8

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_37807d8ab8df9b7c_31_new)
HX_DECLARE_CLASS1(haxe,Utf8)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES Utf8_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Utf8_obj OBJ_;
		Utf8_obj();

	public:
		enum { _hx_ClassId = 0x11cee8b7 };

		void __construct( ::Dynamic size);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.Utf8")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.Utf8"); }

		hx::ObjectPtr< Utf8_obj > __new( ::Dynamic size) {
			hx::ObjectPtr< Utf8_obj > __this = new Utf8_obj();
			__this->__construct(size);
			return __this;
		}

		static hx::ObjectPtr< Utf8_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic size) {
			Utf8_obj *__this = (Utf8_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Utf8_obj), true, "haxe.Utf8"));
			*(void **)__this = Utf8_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_37807d8ab8df9b7c_31_new)
HXLINE(  32)		( ( ::haxe::Utf8)(__this) )->__s = ::Array_obj< int >::__new();
HXLINE(  33)		bool _hx_tmp;
HXDLIN(  33)		if (hx::IsNotNull( size )) {
HXLINE(  33)			_hx_tmp = hx::IsGreater( size,(int)0 );
            		}
            		else {
HXLINE(  33)			_hx_tmp = false;
            		}
HXDLIN(  33)		if (_hx_tmp) {
HXLINE(  34)			( ( ::haxe::Utf8)(__this) )->__s->reserve(size);
            		}
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Utf8_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Utf8","\x51","\x81","\x87","\x38"); }

		static int length(::String s);
		static ::Dynamic length_dyn();

		::Array< int > __s;
		void addChar(int c);
		::Dynamic addChar_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Utf8 */ 
