///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/CtrRef.h>
#include <fb/MusicPlayerPlugins.h>
#include <fb/RefArray.h>

namespace fb {
	class MusicBaseAsset;
	class MusicPlayerEntry;
	class OutputNodeData;
}

namespace fb {
	class MusicPlayerNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicPlayerNodeData"); }
		virtual ~MusicPlayerNodeData() override {}
		MusicPlayerNodeData() {
			m_defaultStartEventNameHash = 0;
		};

		AudioGraphNodePort m_pitch; // 0x10 (16)
		AudioGraphNodePort m_amplitude; // 0x18 (24)
		AudioGraphNodePort m_buffer; // 0x20 (32)
		AudioGraphNodePort m_start; // 0x28 (40)
		AudioGraphNodePort m_stop; // 0x30 (48)
		AudioGraphNodePort m_output; // 0x38 (56)
		AudioGraphNodePort m_overlay; // 0x40 (64)
		AudioGraphNodePort m_isBuffered; // 0x48 (72)
		AudioGraphNodePort m_isFinished; // 0x50 (80)
		CtrRef<MusicBaseAsset> m_asset; // 0x58 (88)
		u32 m_defaultStartEventNameHash; // 0x60 (96)
		RefArray<MusicPlayerEntry> m_entries; // 0x68 (104)
		Array<MusicPlayerPlugins> m_plugins; // 0x70 (112)
		CtrRef<OutputNodeData> m_pitchSource; // 0x78 (120)
	}; // 0x80 (128)
}

