///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/String.h>

namespace fb {
	class TessellationShaderFragmentAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TessellationShaderFragmentAsset"); }
		virtual ~TessellationShaderFragmentAsset() override {}
		TessellationShaderFragmentAsset() {
		};

		String m_sourceFile; // 0x18 (24)
		String m_hsControlPointFunctionName; // 0x20 (32)
		String m_hsPatchConstantFunctionName; // 0x28 (40)
		String m_dsFunctionName; // 0x30 (48)
		String m_vsOutputStructName; // 0x38 (56)
		String m_hsControlPointOutputStructName; // 0x40 (64)
		String m_hsPatchConstantOutputStructName; // 0x48 (72)
		String m_dsOutputStructName; // 0x50 (80)
	}; // 0x58 (88)
}

