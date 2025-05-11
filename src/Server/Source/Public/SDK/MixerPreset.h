///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/MixerPresetGroupData.h>
#include <fb/MixerPresetNodeData.h>

namespace fb {
	class MixerPreset : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MixerPreset"); }
		virtual ~MixerPreset() override {}
		MixerPreset() {
			m_nameHash = 0;
		};

		u32 m_nameHash; // 0x10 (16)
		Array<MixerPresetGroupData> m_groups; // 0x18 (24)
		Array<MixerPresetNodeData> m_nodes; // 0x20 (32)
	}; // 0x28 (40)
}

