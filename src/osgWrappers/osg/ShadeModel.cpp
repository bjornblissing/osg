// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/.svn/text-base/CopyOp.svn-base>
#include <osg/.svn/text-base/Object.svn-base>
#include <osg/.svn/text-base/ShadeModel.svn-base>
#include <osg/.svn/text-base/StateAttribute.svn-base>
#include <osg/ShadeModel>
#include <osg/State>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::ShadeModel::Mode)
	I_EnumLabel(osg::ShadeModel::FLAT);
	I_EnumLabel(osg::ShadeModel::SMOOTH);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::ShadeModel)
	I_BaseType(osg::StateAttribute);
	I_BaseType(osg::StateAttribute);
	I_Constructor0(____ShadeModel,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::ShadeModel &, sm, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ShadeModel__C5_ShadeModel_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(void, setMode, IN, osg::ShadeModel::Mode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setMode__Mode,
	          "",
	          "");
	I_Method0(osg::ShadeModel::Mode, getMode,
	          Properties::NON_VIRTUAL,
	          __Mode__getMode,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "",
	          "");
	I_Constructor0(____ShadeModel,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::ShadeModel &, sm, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ShadeModel__C5_ShadeModel_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(void, setMode, IN, osg::ShadeModel::Mode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setMode__Mode,
	          "",
	          "");
	I_Method0(osg::ShadeModel::Mode, getMode,
	          Properties::NON_VIRTUAL,
	          __Mode__getMode,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "",
	          "");
	I_SimpleProperty(osg::ShadeModel::Mode, Mode, 
	                 __Mode__getMode, 
	                 __void__setMode__Mode);
	I_SimpleProperty(Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::ShadeModel::Mode)
	I_EnumLabel(osg::ShadeModel::FLAT);
	I_EnumLabel(osg::ShadeModel::SMOOTH);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::ShadeModel)
	I_BaseType(osg::StateAttribute);
	I_BaseType(osg::StateAttribute);
	I_Constructor0(____ShadeModel,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::ShadeModel &, sm, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ShadeModel__C5_ShadeModel_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(void, setMode, IN, osg::ShadeModel::Mode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setMode__Mode,
	          "",
	          "");
	I_Method0(osg::ShadeModel::Mode, getMode,
	          Properties::NON_VIRTUAL,
	          __Mode__getMode,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "",
	          "");
	I_Constructor0(____ShadeModel,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::ShadeModel &, sm, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ShadeModel__C5_ShadeModel_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(void, setMode, IN, osg::ShadeModel::Mode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setMode__Mode,
	          "",
	          "");
	I_Method0(osg::ShadeModel::Mode, getMode,
	          Properties::NON_VIRTUAL,
	          __Mode__getMode,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "",
	          "");
	I_SimpleProperty(osg::ShadeModel::Mode, Mode, 
	                 __Mode__getMode, 
	                 __void__setMode__Mode);
	I_SimpleProperty(Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

