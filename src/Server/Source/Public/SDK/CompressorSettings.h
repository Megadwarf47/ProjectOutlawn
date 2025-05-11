///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class CompressorSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CompressorSettings"); }
		virtual ~CompressorSettings() override {}
		CompressorSettings() {
			m_ratio = 1.f;
			m_threshold = 0.f;
			m_attack = 10.f;
			m_release = 100.f;
		};

		float m_ratio; // 0x10 (16)
		float m_threshold; // 0x14 (20)
		float m_attack; // 0x18 (24)
		float m_release; // 0x1C (28)
	}; // 0x20 (32)
}

