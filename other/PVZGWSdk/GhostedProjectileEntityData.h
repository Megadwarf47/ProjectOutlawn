///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MeshProjectileEntityData.h>

namespace fb {
	class GhostedProjectileEntityData : public MeshProjectileEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GhostedProjectileEntityData"); }
		virtual ~GhostedProjectileEntityData() override {}
		virtual bool getIsEntityOwner() const override { return true; }
		GhostedProjectileEntityData() {
			m_proxyConvergenceDelay = -1.f;
			m_proxyConvergenceDuration = -1.f;
			m_proxyConvergenceInstantOnAttach = true;
			m_forceProxyConvergence = false;
		};

		float m_proxyConvergenceDelay; // 0x120 (288)
		float m_proxyConvergenceDuration; // 0x124 (292)
		bool m_proxyConvergenceInstantOnAttach; // 0x128 (296)
		bool m_forceProxyConvergence; // 0x129 (297)
	}; // 0x130 (304)
}

