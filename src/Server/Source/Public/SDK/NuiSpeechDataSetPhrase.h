///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/NuiSpeechPhrase.h>
#include <fb/NuiSpeechTargetDataType.h>
#include <fb/String.h>
#include <fb/UISimpleDataSource.h>

namespace fb {
	class NuiSpeechDataSetPhrase : public NuiSpeechPhrase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechDataSetPhrase"); }
		virtual ~NuiSpeechDataSetPhrase() override {}
		NuiSpeechDataSetPhrase() {
			m_dataType = NuiSpeechTargetDataType::NuiSpeechTargetDataType_String;
			m_forceUpdate = false;
		};

		String m_param; // 0x40 (64)
		NuiSpeechTargetDataType m_dataType; // 0x48 (72)
		UISimpleDataSource m_dataSource; // 0x50 (80)
		bool m_forceUpdate; // 0x60 (96)
	}; // 0x68 (104)
}

