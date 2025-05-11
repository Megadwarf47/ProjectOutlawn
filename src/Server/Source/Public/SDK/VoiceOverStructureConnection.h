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
	class VoiceOverRelationshipInput;
	class VoiceOverStructureNode;
}

namespace fb {
	class VoiceOverStructureConnection : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverStructureConnection"); }
		virtual ~VoiceOverStructureConnection() override {}
		VoiceOverStructureConnection() {
		};

		CtrRef<VoiceOverStructureNode> m_targetNode; // 0x10 (16)
		CtrRef<VoiceOverRelationshipInput> m_targetInput; // 0x18 (24)
	}; // 0x20 (32)
}

