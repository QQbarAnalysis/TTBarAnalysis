#include <stdlib.h>
#include <cmath>
#include <vector>
#include <string>
#include <iostream>
#include <EVENT/MCParticle.h>
#include <IMPL/MCParticleImpl.h>
#include <EVENT/LCCollection.h>
#include "MathOperator.hh"

#include "marlin/VerbosityLevels.h"
#ifndef _QQBarMCOperator_hh
#define _QQBarMCOperator_hh
namespace TTBarProcessor 
{
	class QQBarMCOperator 
	{
		public:
		//
		//	Constants
		//
	
		//
		//	Constructors
		//
			QQBarMCOperator (EVENT::LCCollection * col);
			virtual ~QQBarMCOperator () {};
		//
		//	Methods
		//
			//DO NOT USE THAT ON T-QUARKS!!!
			std::vector< EVENT::MCParticle * > GetPairParticles(int pdg);
			std::vector< EVENT::MCParticle * > GetTopPairParticles(float & topBangle, float & topBarBangle);
			std::vector< EVENT::MCParticle * > GetFinalState();
			std::vector< EVENT::MCParticle * > GetFinalStateBkg();
			EVENT::MCParticle * CombineParticles(EVENT::MCParticle * b, EVENT::MCParticle * w);
			EVENT::MCParticle * FindParticle(int pdg);
			std::vector< EVENT::MCParticle * > GetBquarkPair();
			EVENT::MCParticle * GetNeutrino();

		private:
		//
		//	Data
		//
			EVENT::LCCollection * myCollection;
			std::vector< EVENT::MCParticle * > myBquarkPair;
			EVENT::MCParticle * myNeutrino;
		//
		//	Private methods
		//
	};
}
#endif
