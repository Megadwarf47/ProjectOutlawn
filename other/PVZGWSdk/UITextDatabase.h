///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/LanguageFormat.h>

namespace fb {
	class UITextDatabase : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UITextDatabase"); }
		virtual ~UITextDatabase() override {}
		UITextDatabase() {
			m_language = LanguageFormat::LanguageFormat_English;
			m_binaryChunkSize = 0;
			m_histogramChunkSize = 0;
		};

		LanguageFormat m_language; // 0x18 (24)
		Guid m_binaryChunk; // 0x1C (28)
		u32 m_binaryChunkSize; // 0x2C (44)
		Guid m_histogramChunk; // 0x30 (48)
		u32 m_histogramChunkSize; // 0x40 (64)
	}; // 0x48 (72)
}

