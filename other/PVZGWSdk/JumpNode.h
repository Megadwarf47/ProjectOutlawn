///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UINodeData.h>

namespace fb {
	class UINodeData;
	class UINodePort;
}

namespace fb {
	class JumpNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("JumpNode"); }
		virtual ~JumpNode() override {}
		JumpNode() {
		};

		CtrRef<UINodePort> m_in; // 0x28 (40)
		CtrRef<UINodeData> m_targetNode; // 0x30 (48)
		CtrRef<UINodePort> m_targetPort; // 0x38 (56)
	}; // 0x40 (64)
}

