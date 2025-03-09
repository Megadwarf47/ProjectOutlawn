///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class IdleTune : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("IdleTune"); }
		virtual ~IdleTune() override {}
		IdleTune() {
			m_tetherDist = 3.6f;
			m_returnDelay = 2.f;
		};

		float m_tetherDist; // 0x18 (24)
		float m_returnDelay; // 0x1C (28)
	}; // 0x20 (32)
}

