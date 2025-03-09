///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class UINodeData;
	class UINodePort;
}

namespace fb {
	class UINodeConnection : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINodeConnection"); }
		virtual ~UINodeConnection() override {}
		UINodeConnection() {
			m_numScreensToPop = 0;
		};

		CtrRef<UINodeData> m_sourceNode; // 0x10 (16)
		CtrRef<UINodeData> m_targetNode; // 0x18 (24)
		CtrRef<UINodePort> m_sourcePort; // 0x20 (32)
		CtrRef<UINodePort> m_targetPort; // 0x28 (40)
		String m_sourcePortName; // 0x30 (48)
		String m_targetPortName; // 0x38 (56)
		s32 m_numScreensToPop; // 0x40 (64)
	}; // 0x48 (72)
}

