///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class VoiceOverNode;
}

namespace fb {
	class VoiceOverNodeConfigData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverNodeConfigData"); }
		virtual ~VoiceOverNodeConfigData() override {}
		VoiceOverNodeConfigData() {
		};

		CtrRef<VoiceOverNode> m_node; // 0x10 (16)
	}; // 0x18 (24)
}

