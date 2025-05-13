///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameObjectData.h>
#include <fb/LinearTransform.h>
#include <fb/RadiosityTypeOverride.h>
#include <fb/StreamRealm.h>

namespace fb {
	class Blueprint;
	class ObjectVariation;
}

namespace fb {
	class ReferenceObjectData : public GameObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ReferenceObjectData"); }
		virtual ~ReferenceObjectData() override {}
		ReferenceObjectData() {
			m_streamRealm = StreamRealm::StreamRealm_None;
			m_radiosityTypeOverride = RadiosityTypeOverride::RadiosityTypeOverride_None;
			m_castSunShadowEnable = true;
			m_castReflectionEnable = false;
			m_excluded = false;
		};

		CtrRef<Blueprint> m_blueprint; // 0x18 (24)
		LinearTransform m_blueprintTransform; // 0x20 (32)
		CtrRef<ObjectVariation> m_objectVariation; // 0x60 (96)
		StreamRealm m_streamRealm; // 0x68 (104)
		RadiosityTypeOverride m_radiosityTypeOverride; // 0x6C (108)
		bool m_castSunShadowEnable; // 0x70 (112)
		bool m_castReflectionEnable; // 0x71 (113)
		bool m_excluded; // 0x72 (114)
	}; // 0x80 (128)
}

