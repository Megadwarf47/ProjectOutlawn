///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UINodeData.h>
#include <fb/UISimpleDataSource.h>

namespace fb {
	class UINodePort;
}

namespace fb {
	class DataIncrementNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DataIncrementNode"); }
		virtual ~DataIncrementNode() override {}
		DataIncrementNode() {
			m_max = 100.f;
			m_min = 0.f;
			m_incrementSize = 1.f;
		};

		CtrRef<UINodePort> m_in; // 0x28 (40)
		CtrRef<UINodePort> m_out; // 0x30 (48)
		float m_max; // 0x38 (56)
		float m_min; // 0x3C (60)
		float m_incrementSize; // 0x40 (64)
		UISimpleDataSource m_dataSource; // 0x48 (72)
	}; // 0x58 (88)
}

