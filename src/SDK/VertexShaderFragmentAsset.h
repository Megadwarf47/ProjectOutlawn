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
	class VertexShaderFragmentAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VertexShaderFragmentAsset"); }
		virtual ~VertexShaderFragmentAsset() override {}
		VertexShaderFragmentAsset() {
		};

		String m_sourceFile; // 0x18 (24)
		String m_function; // 0x20 (32)
	}; // 0x28 (40)
}

