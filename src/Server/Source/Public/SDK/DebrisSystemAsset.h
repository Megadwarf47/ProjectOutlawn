///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/DebrisHavokInfo.h>

namespace fb {
	class DebrisSystemAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DebrisSystemAsset"); }
		virtual ~DebrisSystemAsset() override {}
		DebrisSystemAsset() {
			m_havokMeshCount = 0;
		};

		Array<DebrisHavokInfo> m_havokMeshes; // 0x18 (24)
		s32 m_havokMeshCount; // 0x20 (32)
	}; // 0x28 (40)
}

