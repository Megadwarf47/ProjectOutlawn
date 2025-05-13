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
#include <fb/UISimpleDataSource.h>

namespace fb {
	class UINodePort;
}

namespace fb {
	class ComparisonLogicNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ComparisonLogicNode"); }
		virtual ~ComparisonLogicNode() override {}
		ComparisonLogicNode() {
			m_skipFractionals = false;
		};

		CtrRef<UINodePort> m_in; // 0x28 (40)
		RefArray<UINodePort> m_outputs; // 0x30 (48)
		UISimpleDataSource m_dataSourceInfo; // 0x38 (56)
		bool m_skipFractionals; // 0x48 (72)
	}; // 0x50 (80)
}

