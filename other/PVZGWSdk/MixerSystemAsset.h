///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class MixGroup;
}

namespace fb {
	class MixerSystemAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MixerSystemAsset"); }
		virtual ~MixerSystemAsset() override {}
		MixerSystemAsset() {
		};

		RefArray<MixGroup> m_groups; // 0x18 (24)
	}; // 0x20 (32)
}

