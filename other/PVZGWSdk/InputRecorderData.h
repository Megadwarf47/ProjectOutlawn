///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class InputRecorderData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InputRecorderData"); }
		virtual ~InputRecorderData() override {}
		InputRecorderData() {
			m_toggleRecordAction = 871087131;
			m_autoIncrementFileName = true;
		};

		String m_fileNamePrefix; // 0x10 (16)
		String m_fileName; // 0x18 (24)
		s32 m_toggleRecordAction; // 0x20 (32)
		bool m_autoIncrementFileName; // 0x24 (36)
	}; // 0x28 (40)
}

