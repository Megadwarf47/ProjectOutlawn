///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/RawFileAsset.h>

namespace fb {
	class RawFileDataAsset : public RawFileAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RawFileDataAsset"); }
		virtual ~RawFileDataAsset() override {}
		RawFileDataAsset() {
			m_size = 0;
		};

		Array<u8> m_rawData; // 0x18 (24)
		u32 m_size; // 0x20 (32)
	}; // 0x28 (40)
}

