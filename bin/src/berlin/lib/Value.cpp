// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_berlin_lib_AST
#include <berlin/lib/AST.h>
#endif
#ifndef INCLUDED_berlin_lib_Assert
#include <berlin/lib/Assert.h>
#endif
#ifndef INCLUDED_berlin_lib_Value
#include <berlin/lib/Value.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_17a0c7eb3cee571c_16_new,"berlin.lib.Value","new",0xbb8b064e,"berlin.lib.Value.new","berlin/lib/Value.hx",16,0xd010a364)
HX_LOCAL_STACK_FRAME(_hx_pos_17a0c7eb3cee571c_25_FAIL,"berlin.lib.Value","FAIL",0x438e7c30,"berlin.lib.Value.FAIL","berlin/lib/Value.hx",25,0xd010a364)
HX_LOCAL_STACK_FRAME(_hx_pos_17a0c7eb3cee571c_30_VAL,"berlin.lib.Value","VAL",0xbb78b0af,"berlin.lib.Value.VAL","berlin/lib/Value.hx",30,0xd010a364)
namespace berlin{
namespace lib{

void Value_obj::__construct(::String type, ::Dynamic err, ::Dynamic pos,::Array< ::Dynamic> asts){
            	HX_STACKFRAME(&_hx_pos_17a0c7eb3cee571c_16_new)
HXLINE(  17)		::berlin::lib::Assert_obj::ok(::Std_obj::is(asts,hx::ArrayBase::__mClass));
HXLINE(  18)		::berlin::lib::Assert_obj::ok(::Std_obj::is(pos,hx::ClassOf< int >()));
HXLINE(  19)		::berlin::lib::Assert_obj::ok(::Std_obj::is(err,hx::ClassOf< ::hx::Class >()));
            	}

Dynamic Value_obj::__CreateEmpty() { return new Value_obj; }

void *Value_obj::_hx_vtable = 0;

Dynamic Value_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Value_obj > _hx_result = new Value_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Value_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x16d15b0e;
}

 ::berlin::lib::Value Value_obj::FAIL( ::Dynamic err){
            	HX_GC_STACKFRAME(&_hx_pos_17a0c7eb3cee571c_25_FAIL)
HXDLIN(  25)		return  ::berlin::lib::Value_obj::__alloc( HX_CTX ,HX_("FAIL",de,81,76,2e),err,null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,FAIL,return )

 ::berlin::lib::Value Value_obj::VAL(int pos,::Array< ::Dynamic> asts, ::Dynamic err){
            	HX_GC_STACKFRAME(&_hx_pos_17a0c7eb3cee571c_30_VAL)
HXDLIN(  30)		return  ::berlin::lib::Value_obj::__alloc( HX_CTX ,HX_("VAL",c1,7a,41,00),err,pos,asts);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Value_obj,VAL,return )


hx::ObjectPtr< Value_obj > Value_obj::__new(::String type, ::Dynamic err, ::Dynamic pos,::Array< ::Dynamic> asts) {
	hx::ObjectPtr< Value_obj > __this = new Value_obj();
	__this->__construct(type,err,pos,asts);
	return __this;
}

hx::ObjectPtr< Value_obj > Value_obj::__alloc(hx::Ctx *_hx_ctx,::String type, ::Dynamic err, ::Dynamic pos,::Array< ::Dynamic> asts) {
	Value_obj *__this = (Value_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Value_obj), true, "berlin.lib.Value"));
	*(void **)__this = Value_obj::_hx_vtable;
	__this->__construct(type,err,pos,asts);
	return __this;
}

Value_obj::Value_obj()
{
}

void Value_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Value);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(err,"err");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(asts,"asts");
	HX_MARK_END_CLASS();
}

void Value_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(err,"err");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(asts,"asts");
}

hx::Val Value_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"err") ) { return hx::Val( err ); }
		if (HX_FIELD_EQ(inName,"pos") ) { return hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"asts") ) { return hx::Val( asts ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Value_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"VAL") ) { outValue = VAL_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"FAIL") ) { outValue = FAIL_dyn(); return true; }
	}
	return false;
}

hx::Val Value_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"err") ) { err=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"asts") ) { asts=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Value_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("asts","\xf1","\x5a","\x75","\x40"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Value_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Value_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Value_obj,err),HX_HCSTRING("err","\x65","\x07","\x4d","\x00")},
	{hx::fsInt,(int)offsetof(Value_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Value_obj,asts),HX_HCSTRING("asts","\xf1","\x5a","\x75","\x40")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Value_obj_sStaticStorageInfo = 0;
#endif

static ::String Value_obj_sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("err","\x65","\x07","\x4d","\x00"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("asts","\xf1","\x5a","\x75","\x40"),
	::String(null()) };

static void Value_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Value_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Value_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Value_obj::__mClass,"__mClass");
};

#endif

hx::Class Value_obj::__mClass;

static ::String Value_obj_sStaticFields[] = {
	HX_HCSTRING("FAIL","\xde","\x81","\x76","\x2e"),
	HX_HCSTRING("VAL","\xc1","\x7a","\x41","\x00"),
	::String(null())
};

void Value_obj::__register()
{
	hx::Object *dummy = new Value_obj;
	Value_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("berlin.lib.Value","\x5c","\x87","\xa2","\x92");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Value_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Value_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Value_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Value_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Value_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Value_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Value_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Value_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace berlin
} // end namespace lib
