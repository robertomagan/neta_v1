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


package nesg.netattacks.simulations.SimpleAttackScenarios.SimpleRouteErrorScenario;

import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import inet.world.radio.ChannelControl;

import nesg.netattacks.nodes.NA_AttackerAdhocHost;
import nesg.netattacks.nodes.NA_AdhocHost;


network SimpleRouteError
{
    parameters:
        int numHosts;
        @display("bgb=700,300,grey75");
    submodules:
        node[numHosts]: NA_AdhocHost {
            @display("p=100,50");
        }
        flatNetworkConfigurator: FlatNetworkConfigurator {
            @display("p=100,250");
        }
		channelControl: ChannelControl {
			@display("p=250,250;i=misc/sun");
        }
    //connections allowunconnected:
}

