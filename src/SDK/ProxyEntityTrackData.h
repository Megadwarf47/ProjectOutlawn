///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityTrackBaseData.h>

namespace fb {
	class ProxyEntityTrackData : public EntityTrackBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProxyEntityTrackData"); }
		virtual ~ProxyEntityTrackData() override {}
		ProxyEntityTrackData() {
			m_required = false;
		};

		bool m_required; // 0x38 (56)
	}; // 0x40 (64)
}

