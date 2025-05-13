///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataSetParamType.h>
#include <fb/String.h>
#include <fb/UINodeData.h>
#include <fb/UISimpleDataSource.h>

namespace fb {
	class UINodePort;
}

namespace fb {
	class DataSetNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DataSetNode"); }
		virtual ~DataSetNode() override {}
		DataSetNode() {
			m_paramType = DataSetParamType::DSPT_Default;
			m_setToEmptyString = false;
			m_forceUpdate = false;
		};

		CtrRef<UINodePort> m_in; // 0x28 (40)
		CtrRef<UINodePort> m_out; // 0x30 (48)
		String m_param; // 0x38 (56)
		DataSetParamType m_paramType; // 0x40 (64)
		UISimpleDataSource m_dataSource; // 0x48 (72)
		bool m_setToEmptyString; // 0x58 (88)
		bool m_forceUpdate; // 0x59 (89)
	}; // 0x60 (96)
}

