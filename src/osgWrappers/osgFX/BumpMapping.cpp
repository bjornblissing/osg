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
#include <osg/.svn/text-base/Geometry.svn-base>
#include <osg/.svn/text-base/Node.svn-base>
#include <osg/.svn/text-base/NodeVisitor.svn-base>
#include <osg/.svn/text-base/Object.svn-base>
#include <osg/Texture2D>
#include <osgFX/BumpMapping>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgFX::BumpMapping)
	I_BaseType(osgFX::Effect);
	I_BaseType(osgFX::Effect);
	I_Constructor0(____BumpMapping,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgFX::BumpMapping &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____BumpMapping__C5_BumpMapping_R1__C5_osg_CopyOp_R1,
	                           "",
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
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method0(const char *, effectName,
	          Properties::VIRTUAL,
	          __C5_char_P1__effectName,
	          "",
	          "");
	I_Method0(const char *, effectDescription,
	          Properties::VIRTUAL,
	          __C5_char_P1__effectDescription,
	          "",
	          "");
	I_Method0(const char *, effectAuthor,
	          Properties::VIRTUAL,
	          __C5_char_P1__effectAuthor,
	          "",
	          "");
	I_Method0(int, getLightNumber,
	          Properties::NON_VIRTUAL,
	          __int__getLightNumber,
	          "get the OpenGL light number ",
	          "");
	I_Method1(void, setLightNumber, IN, int, n,
	          Properties::NON_VIRTUAL,
	          __void__setLightNumber__int,
	          "set the OpenGL light number that will be used in lighting computations ",
	          "");
	I_Method0(int, getDiffuseTextureUnit,
	          Properties::NON_VIRTUAL,
	          __int__getDiffuseTextureUnit,
	          "get the texture unit that contains diffuse color texture. ",
	          "Default is 1 ");
	I_Method1(void, setDiffuseTextureUnit, IN, int, n,
	          Properties::NON_VIRTUAL,
	          __void__setDiffuseTextureUnit__int,
	          "set the texture unit that contains diffuse color texture. ",
	          "Default is 1 ");
	I_Method0(int, getNormalMapTextureUnit,
	          Properties::NON_VIRTUAL,
	          __int__getNormalMapTextureUnit,
	          "get the texture unit that contains normal map texture. ",
	          "Default is 0 ");
	I_Method1(void, setNormalMapTextureUnit, IN, int, n,
	          Properties::NON_VIRTUAL,
	          __void__setNormalMapTextureUnit__int,
	          "set the texture unit that contains normal map texture. ",
	          "Default is 0 ");
	I_Method0(osg::Texture2D *, getOverrideDiffuseTexture,
	          Properties::NON_VIRTUAL,
	          __osg_Texture2D_P1__getOverrideDiffuseTexture,
	          "get the diffuse color texture that overrides children's texture ",
	          "");
	I_Method0(const osg::Texture2D *, getOverrideDiffuseTexture,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Texture2D_P1__getOverrideDiffuseTexture,
	          "get the const diffuse color texture that overrides children's texture ",
	          "");
	I_Method1(void, setOverrideDiffuseTexture, IN, osg::Texture2D *, texture,
	          Properties::NON_VIRTUAL,
	          __void__setOverrideDiffuseTexture__osg_Texture2D_P1,
	          "set the diffuse color texture that overrides children's texture ",
	          "");
	I_Method0(osg::Texture2D *, getOverrideNormalMapTexture,
	          Properties::NON_VIRTUAL,
	          __osg_Texture2D_P1__getOverrideNormalMapTexture,
	          "get the normal map texture that overrides children's texture ",
	          "");
	I_Method0(const osg::Texture2D *, getOverrideNormalMapTexture,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Texture2D_P1__getOverrideNormalMapTexture,
	          "get the const normal map texture that overrides children's texture ",
	          "");
	I_Method1(void, setOverrideNormalMapTexture, IN, osg::Texture2D *, texture,
	          Properties::NON_VIRTUAL,
	          __void__setOverrideNormalMapTexture__osg_Texture2D_P1,
	          "set the normal map texture that overrides children's texture ",
	          "");
	I_Method1(void, prepareGeometry, IN, osg::Geometry *, geo,
	          Properties::NON_VIRTUAL,
	          __void__prepareGeometry__osg_Geometry_P1,
	          "prepare a Geometry for bump lighting. ",
	          "Tangent-space basis vectors are generated and attached to the geometry as vertex attribute arrays.");
	I_Method1(void, prepareNode, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__prepareNode__osg_Node_P1,
	          "prepare a Node for bump lighting, calling prepareGeometry() for each Geometry ",
	          "");
	I_Method0(void, prepareChildren,
	          Properties::NON_VIRTUAL,
	          __void__prepareChildren,
	          "prepare children for bump lighting. ",
	          "Actually calls prepareNode() for each child ");
	I_Method0(void, setUpDemo,
	          Properties::NON_VIRTUAL,
	          __void__setUpDemo,
	          "set up a demo environment with predefined diffuse and normal maps, as well as texture coordinates ",
	          "");
	I_Constructor0(____BumpMapping,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgFX::BumpMapping &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____BumpMapping__C5_BumpMapping_R1__C5_osg_CopyOp_R1,
	                           "",
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
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method0(const char *, effectName,
	          Properties::VIRTUAL,
	          __C5_char_P1__effectName,
	          "",
	          "");
	I_Method0(const char *, effectDescription,
	          Properties::VIRTUAL,
	          __C5_char_P1__effectDescription,
	          "",
	          "");
	I_Method0(const char *, effectAuthor,
	          Properties::VIRTUAL,
	          __C5_char_P1__effectAuthor,
	          "",
	          "");
	I_Method0(int, getLightNumber,
	          Properties::NON_VIRTUAL,
	          __int__getLightNumber,
	          "get the OpenGL light number ",
	          "");
	I_Method1(void, setLightNumber, IN, int, n,
	          Properties::NON_VIRTUAL,
	          __void__setLightNumber__int,
	          "set the OpenGL light number that will be used in lighting computations ",
	          "");
	I_Method0(int, getDiffuseTextureUnit,
	          Properties::NON_VIRTUAL,
	          __int__getDiffuseTextureUnit,
	          "get the texture unit that contains diffuse color texture. ",
	          "Default is 1 ");
	I_Method1(void, setDiffuseTextureUnit, IN, int, n,
	          Properties::NON_VIRTUAL,
	          __void__setDiffuseTextureUnit__int,
	          "set the texture unit that contains diffuse color texture. ",
	          "Default is 1 ");
	I_Method0(int, getNormalMapTextureUnit,
	          Properties::NON_VIRTUAL,
	          __int__getNormalMapTextureUnit,
	          "get the texture unit that contains normal map texture. ",
	          "Default is 0 ");
	I_Method1(void, setNormalMapTextureUnit, IN, int, n,
	          Properties::NON_VIRTUAL,
	          __void__setNormalMapTextureUnit__int,
	          "set the texture unit that contains normal map texture. ",
	          "Default is 0 ");
	I_Method0(osg::Texture2D *, getOverrideDiffuseTexture,
	          Properties::NON_VIRTUAL,
	          __osg_Texture2D_P1__getOverrideDiffuseTexture,
	          "get the diffuse color texture that overrides children's texture ",
	          "");
	I_Method0(const osg::Texture2D *, getOverrideDiffuseTexture,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Texture2D_P1__getOverrideDiffuseTexture,
	          "get the const diffuse color texture that overrides children's texture ",
	          "");
	I_Method1(void, setOverrideDiffuseTexture, IN, osg::Texture2D *, texture,
	          Properties::NON_VIRTUAL,
	          __void__setOverrideDiffuseTexture__osg_Texture2D_P1,
	          "set the diffuse color texture that overrides children's texture ",
	          "");
	I_Method0(osg::Texture2D *, getOverrideNormalMapTexture,
	          Properties::NON_VIRTUAL,
	          __osg_Texture2D_P1__getOverrideNormalMapTexture,
	          "get the normal map texture that overrides children's texture ",
	          "");
	I_Method0(const osg::Texture2D *, getOverrideNormalMapTexture,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Texture2D_P1__getOverrideNormalMapTexture,
	          "get the const normal map texture that overrides children's texture ",
	          "");
	I_Method1(void, setOverrideNormalMapTexture, IN, osg::Texture2D *, texture,
	          Properties::NON_VIRTUAL,
	          __void__setOverrideNormalMapTexture__osg_Texture2D_P1,
	          "set the normal map texture that overrides children's texture ",
	          "");
	I_Method1(void, prepareGeometry, IN, osg::Geometry *, geo,
	          Properties::NON_VIRTUAL,
	          __void__prepareGeometry__osg_Geometry_P1,
	          "prepare a Geometry for bump lighting. ",
	          "Tangent-space basis vectors are generated and attached to the geometry as vertex attribute arrays.");
	I_Method1(void, prepareNode, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__prepareNode__osg_Node_P1,
	          "prepare a Node for bump lighting, calling prepareGeometry() for each Geometry ",
	          "");
	I_Method0(void, prepareChildren,
	          Properties::NON_VIRTUAL,
	          __void__prepareChildren,
	          "prepare children for bump lighting. ",
	          "Actually calls prepareNode() for each child ");
	I_Method0(void, setUpDemo,
	          Properties::NON_VIRTUAL,
	          __void__setUpDemo,
	          "set up a demo environment with predefined diffuse and normal maps, as well as texture coordinates ",
	          "");
	I_SimpleProperty(int, DiffuseTextureUnit, 
	                 __int__getDiffuseTextureUnit, 
	                 __void__setDiffuseTextureUnit__int);
	I_SimpleProperty(int, LightNumber, 
	                 __int__getLightNumber, 
	                 __void__setLightNumber__int);
	I_SimpleProperty(int, NormalMapTextureUnit, 
	                 __int__getNormalMapTextureUnit, 
	                 __void__setNormalMapTextureUnit__int);
	I_SimpleProperty(osg::Texture2D *, OverrideDiffuseTexture, 
	                 __osg_Texture2D_P1__getOverrideDiffuseTexture, 
	                 __void__setOverrideDiffuseTexture__osg_Texture2D_P1);
	I_SimpleProperty(osg::Texture2D *, OverrideNormalMapTexture, 
	                 __osg_Texture2D_P1__getOverrideNormalMapTexture, 
	                 __void__setOverrideNormalMapTexture__osg_Texture2D_P1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgFX::BumpMapping)
	I_BaseType(osgFX::Effect);
	I_BaseType(osgFX::Effect);
	I_Constructor0(____BumpMapping,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgFX::BumpMapping &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____BumpMapping__C5_BumpMapping_R1__C5_osg_CopyOp_R1,
	                           "",
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
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method0(const char *, effectName,
	          Properties::VIRTUAL,
	          __C5_char_P1__effectName,
	          "",
	          "");
	I_Method0(const char *, effectDescription,
	          Properties::VIRTUAL,
	          __C5_char_P1__effectDescription,
	          "",
	          "");
	I_Method0(const char *, effectAuthor,
	          Properties::VIRTUAL,
	          __C5_char_P1__effectAuthor,
	          "",
	          "");
	I_Method0(int, getLightNumber,
	          Properties::NON_VIRTUAL,
	          __int__getLightNumber,
	          "get the OpenGL light number ",
	          "");
	I_Method1(void, setLightNumber, IN, int, n,
	          Properties::NON_VIRTUAL,
	          __void__setLightNumber__int,
	          "set the OpenGL light number that will be used in lighting computations ",
	          "");
	I_Method0(int, getDiffuseTextureUnit,
	          Properties::NON_VIRTUAL,
	          __int__getDiffuseTextureUnit,
	          "get the texture unit that contains diffuse color texture. ",
	          "Default is 1 ");
	I_Method1(void, setDiffuseTextureUnit, IN, int, n,
	          Properties::NON_VIRTUAL,
	          __void__setDiffuseTextureUnit__int,
	          "set the texture unit that contains diffuse color texture. ",
	          "Default is 1 ");
	I_Method0(int, getNormalMapTextureUnit,
	          Properties::NON_VIRTUAL,
	          __int__getNormalMapTextureUnit,
	          "get the texture unit that contains normal map texture. ",
	          "Default is 0 ");
	I_Method1(void, setNormalMapTextureUnit, IN, int, n,
	          Properties::NON_VIRTUAL,
	          __void__setNormalMapTextureUnit__int,
	          "set the texture unit that contains normal map texture. ",
	          "Default is 0 ");
	I_Method0(osg::Texture2D *, getOverrideDiffuseTexture,
	          Properties::NON_VIRTUAL,
	          __osg_Texture2D_P1__getOverrideDiffuseTexture,
	          "get the diffuse color texture that overrides children's texture ",
	          "");
	I_Method0(const osg::Texture2D *, getOverrideDiffuseTexture,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Texture2D_P1__getOverrideDiffuseTexture,
	          "get the const diffuse color texture that overrides children's texture ",
	          "");
	I_Method1(void, setOverrideDiffuseTexture, IN, osg::Texture2D *, texture,
	          Properties::NON_VIRTUAL,
	          __void__setOverrideDiffuseTexture__osg_Texture2D_P1,
	          "set the diffuse color texture that overrides children's texture ",
	          "");
	I_Method0(osg::Texture2D *, getOverrideNormalMapTexture,
	          Properties::NON_VIRTUAL,
	          __osg_Texture2D_P1__getOverrideNormalMapTexture,
	          "get the normal map texture that overrides children's texture ",
	          "");
	I_Method0(const osg::Texture2D *, getOverrideNormalMapTexture,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Texture2D_P1__getOverrideNormalMapTexture,
	          "get the const normal map texture that overrides children's texture ",
	          "");
	I_Method1(void, setOverrideNormalMapTexture, IN, osg::Texture2D *, texture,
	          Properties::NON_VIRTUAL,
	          __void__setOverrideNormalMapTexture__osg_Texture2D_P1,
	          "set the normal map texture that overrides children's texture ",
	          "");
	I_Method1(void, prepareGeometry, IN, osg::Geometry *, geo,
	          Properties::NON_VIRTUAL,
	          __void__prepareGeometry__osg_Geometry_P1,
	          "prepare a Geometry for bump lighting. ",
	          "Tangent-space basis vectors are generated and attached to the geometry as vertex attribute arrays.");
	I_Method1(void, prepareNode, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__prepareNode__osg_Node_P1,
	          "prepare a Node for bump lighting, calling prepareGeometry() for each Geometry ",
	          "");
	I_Method0(void, prepareChildren,
	          Properties::NON_VIRTUAL,
	          __void__prepareChildren,
	          "prepare children for bump lighting. ",
	          "Actually calls prepareNode() for each child ");
	I_Method0(void, setUpDemo,
	          Properties::NON_VIRTUAL,
	          __void__setUpDemo,
	          "set up a demo environment with predefined diffuse and normal maps, as well as texture coordinates ",
	          "");
	I_Constructor0(____BumpMapping,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgFX::BumpMapping &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____BumpMapping__C5_BumpMapping_R1__C5_osg_CopyOp_R1,
	                           "",
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
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method0(const char *, effectName,
	          Properties::VIRTUAL,
	          __C5_char_P1__effectName,
	          "",
	          "");
	I_Method0(const char *, effectDescription,
	          Properties::VIRTUAL,
	          __C5_char_P1__effectDescription,
	          "",
	          "");
	I_Method0(const char *, effectAuthor,
	          Properties::VIRTUAL,
	          __C5_char_P1__effectAuthor,
	          "",
	          "");
	I_Method0(int, getLightNumber,
	          Properties::NON_VIRTUAL,
	          __int__getLightNumber,
	          "get the OpenGL light number ",
	          "");
	I_Method1(void, setLightNumber, IN, int, n,
	          Properties::NON_VIRTUAL,
	          __void__setLightNumber__int,
	          "set the OpenGL light number that will be used in lighting computations ",
	          "");
	I_Method0(int, getDiffuseTextureUnit,
	          Properties::NON_VIRTUAL,
	          __int__getDiffuseTextureUnit,
	          "get the texture unit that contains diffuse color texture. ",
	          "Default is 1 ");
	I_Method1(void, setDiffuseTextureUnit, IN, int, n,
	          Properties::NON_VIRTUAL,
	          __void__setDiffuseTextureUnit__int,
	          "set the texture unit that contains diffuse color texture. ",
	          "Default is 1 ");
	I_Method0(int, getNormalMapTextureUnit,
	          Properties::NON_VIRTUAL,
	          __int__getNormalMapTextureUnit,
	          "get the texture unit that contains normal map texture. ",
	          "Default is 0 ");
	I_Method1(void, setNormalMapTextureUnit, IN, int, n,
	          Properties::NON_VIRTUAL,
	          __void__setNormalMapTextureUnit__int,
	          "set the texture unit that contains normal map texture. ",
	          "Default is 0 ");
	I_Method0(osg::Texture2D *, getOverrideDiffuseTexture,
	          Properties::NON_VIRTUAL,
	          __osg_Texture2D_P1__getOverrideDiffuseTexture,
	          "get the diffuse color texture that overrides children's texture ",
	          "");
	I_Method0(const osg::Texture2D *, getOverrideDiffuseTexture,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Texture2D_P1__getOverrideDiffuseTexture,
	          "get the const diffuse color texture that overrides children's texture ",
	          "");
	I_Method1(void, setOverrideDiffuseTexture, IN, osg::Texture2D *, texture,
	          Properties::NON_VIRTUAL,
	          __void__setOverrideDiffuseTexture__osg_Texture2D_P1,
	          "set the diffuse color texture that overrides children's texture ",
	          "");
	I_Method0(osg::Texture2D *, getOverrideNormalMapTexture,
	          Properties::NON_VIRTUAL,
	          __osg_Texture2D_P1__getOverrideNormalMapTexture,
	          "get the normal map texture that overrides children's texture ",
	          "");
	I_Method0(const osg::Texture2D *, getOverrideNormalMapTexture,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Texture2D_P1__getOverrideNormalMapTexture,
	          "get the const normal map texture that overrides children's texture ",
	          "");
	I_Method1(void, setOverrideNormalMapTexture, IN, osg::Texture2D *, texture,
	          Properties::NON_VIRTUAL,
	          __void__setOverrideNormalMapTexture__osg_Texture2D_P1,
	          "set the normal map texture that overrides children's texture ",
	          "");
	I_Method1(void, prepareGeometry, IN, osg::Geometry *, geo,
	          Properties::NON_VIRTUAL,
	          __void__prepareGeometry__osg_Geometry_P1,
	          "prepare a Geometry for bump lighting. ",
	          "Tangent-space basis vectors are generated and attached to the geometry as vertex attribute arrays.");
	I_Method1(void, prepareNode, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__prepareNode__osg_Node_P1,
	          "prepare a Node for bump lighting, calling prepareGeometry() for each Geometry ",
	          "");
	I_Method0(void, prepareChildren,
	          Properties::NON_VIRTUAL,
	          __void__prepareChildren,
	          "prepare children for bump lighting. ",
	          "Actually calls prepareNode() for each child ");
	I_Method0(void, setUpDemo,
	          Properties::NON_VIRTUAL,
	          __void__setUpDemo,
	          "set up a demo environment with predefined diffuse and normal maps, as well as texture coordinates ",
	          "");
	I_SimpleProperty(int, DiffuseTextureUnit, 
	                 __int__getDiffuseTextureUnit, 
	                 __void__setDiffuseTextureUnit__int);
	I_SimpleProperty(int, LightNumber, 
	                 __int__getLightNumber, 
	                 __void__setLightNumber__int);
	I_SimpleProperty(int, NormalMapTextureUnit, 
	                 __int__getNormalMapTextureUnit, 
	                 __void__setNormalMapTextureUnit__int);
	I_SimpleProperty(osg::Texture2D *, OverrideDiffuseTexture, 
	                 __osg_Texture2D_P1__getOverrideDiffuseTexture, 
	                 __void__setOverrideDiffuseTexture__osg_Texture2D_P1);
	I_SimpleProperty(osg::Texture2D *, OverrideNormalMapTexture, 
	                 __osg_Texture2D_P1__getOverrideNormalMapTexture, 
	                 __void__setOverrideNormalMapTexture__osg_Texture2D_P1);
END_REFLECTOR

