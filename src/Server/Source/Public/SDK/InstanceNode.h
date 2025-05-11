///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/UINodeData.h>

namespace fb {
	class UIGraphAsset;
	class UINodePort;
}

namespace fb {
	class InstanceNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InstanceNode"); }
		virtual ~InstanceNode() override {}
		InstanceNode() {
		};

		CtrRef<UIGraphAsset> m_uiGraph; // 0x28 (40)
		RefArray<UINodePort> m_inputs; // 0x30 (48)
		RefArray<UINodePort> m_outputs; // 0x38 (56)
	}; // 0x40 (64)
}

