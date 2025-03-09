///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class ForceManagerSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ForceManagerSettings"); }
		virtual ~ForceManagerSettings() override {}
		ForceManagerSettings() {
			m_vectorFieldNormValue = 50.f;
			m_vectorFieldCellSize = 1.f;
			m_vectorFieldPlanarHeightPosition = 64.f;
			m_vectorFieldSizeX = 100.f;
			m_vectorFieldSizeY = 1.f;
			m_vectorFieldSizeZ = 100.f;
			m_vectorFieldCenterX = 0.f;
			m_vectorFieldCenterY = 30.f;
			m_vectorFieldCenterZ = 0.f;
			m_vectorFieldPointSize = 2.f;
			m_windEnable = true;
			m_forcesEnable = true;
			m_drawStats = false;
			m_drawWindGraph = false;
			m_drawBoundingVolumes = false;
			m_drawSelectionBoundingVolumes = false;
			m_drawSelectionVectorField = false;
			m_drawSelectionForceVectorField = false;
			m_drawPlanarVectorField = false;
			m_drawExternalVectorField = false;
			m_vectorFieldEnableWind = true;
			m_vectorFieldEnableSphere = true;
			m_vectorFieldEnableCone = true;
			m_vectorFieldEnableBaked = true;
			m_vectorFieldCameraCentered = true;
			m_vectorFieldArrow = true;
			m_vectorFieldLockSelection = false;
		};

		float m_vectorFieldNormValue; // 0x10 (16)
		float m_vectorFieldCellSize; // 0x14 (20)
		float m_vectorFieldPlanarHeightPosition; // 0x18 (24)
		float m_vectorFieldSizeX; // 0x1C (28)
		float m_vectorFieldSizeY; // 0x20 (32)
		float m_vectorFieldSizeZ; // 0x24 (36)
		float m_vectorFieldCenterX; // 0x28 (40)
		float m_vectorFieldCenterY; // 0x2C (44)
		float m_vectorFieldCenterZ; // 0x30 (48)
		float m_vectorFieldPointSize; // 0x34 (52)
		bool m_windEnable; // 0x38 (56)
		bool m_forcesEnable; // 0x39 (57)
		bool m_drawStats; // 0x3A (58)
		bool m_drawWindGraph; // 0x3B (59)
		bool m_drawBoundingVolumes; // 0x3C (60)
		bool m_drawSelectionBoundingVolumes; // 0x3D (61)
		bool m_drawSelectionVectorField; // 0x3E (62)
		bool m_drawSelectionForceVectorField; // 0x3F (63)
		bool m_drawPlanarVectorField; // 0x40 (64)
		bool m_drawExternalVectorField; // 0x41 (65)
		bool m_vectorFieldEnableWind; // 0x42 (66)
		bool m_vectorFieldEnableSphere; // 0x43 (67)
		bool m_vectorFieldEnableCone; // 0x44 (68)
		bool m_vectorFieldEnableBaked; // 0x45 (69)
		bool m_vectorFieldCameraCentered; // 0x46 (70)
		bool m_vectorFieldArrow; // 0x47 (71)
		bool m_vectorFieldLockSelection; // 0x48 (72)
	}; // 0x50 (80)
}

