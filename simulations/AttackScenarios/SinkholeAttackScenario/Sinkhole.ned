//
// Copyright (C) 2013, NESG (Network Engineering and Security Group), http://nesg.ugr.es,
// - Gabriel Maciá Fernández (gmacia@ugr.es)
// - Leovigildo Sánchez Casado (sancale@ugr.es)
// - Rafael A. Rodríguez Gómez (rodgom@ugr.es)
// - Roberto Magán Carrión (rmagan@ugr.es)
// - Pedro García Teodoro (pgteodor@ugr.es)
// - José Camacho Páez (josecamacho@ugr.es)
// - Jesús E. Díaz Verdejo (jedv@ugr.es)
//
// This file is part of NETA.
//
//    NETA is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    NETA is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with NETA.  If not, see <http://www.gnu.org/licenses/>.
//
// @author: Gabriel Macia
// @date: 09/12/2012

package nesg.netattacks.simulations.AttackScenarios.SinkholeAttackScenario;

import inet.networklayer.autorouting.ipv4.IPv4NetworkConfigurator;
import inet.nodes.inet.AdhocHost;
import inet.world.radio.ChannelControl;

import nesg.netattacks.nodes.*;


network Sinkhole
{

    parameters:
        int numHosts;
        int numSinkholes;
        int numFlows = 0;
        @display("bgb=1000,1000,grey75");
    submodules:
        node[numHosts]: NA_AdhocHost {
            @display("p=300,150");
        }
        attacker[numSinkholes]: NA_AttackerAdhocHost {
            @display("p=500,150");
        }
        configurator: IPv4NetworkConfigurator {
            @display("p=80,20");
        }
		channelControl: ChannelControl {
			@display("p=80,70;i=misc/sun");
        }
}
