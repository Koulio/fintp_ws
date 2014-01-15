/*
* FinTP - Financial Transactions Processing Application
* Copyright (C) 2013 Business Information Systems (Allevo) S.R.L.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>
* or contact Allevo at : 031281 Bucuresti, 23C Calea Vitan, Romania,
* phone +40212554577, office@allevo.ro <mailto:office@allevo.ro>, www.allevo.ro.
*/

#ifndef SEQUENCETYPE_H
#define SEQUENCETYPE_H

#include "../DllMainWs.h"
#include "../WSU/Identifier.h"

namespace wsrm
{
	class ExportedWsObject SequenceType
	{
		public :
	
			enum Type
			{
				Sequence,
				SequenceAcknowledgement,
				SequenceFault,
				SequenceDistinctAck
			};
			
			SequenceType( const SequenceType::Type type = SequenceType::Sequence, const string& identifier = "" );
			virtual ~SequenceType();
	
			// accessors
			void setIdentifier( const string& identifier ) { m_Identifier.setIdentifier( identifier ); }
			string getIdentifier() const { return m_Identifier.getIdentifier(); }
			
			SequenceType::Type getType() const { return m_Type; }
			
		protected : 

			wsu::Identifier m_Identifier;
			SequenceType::Type m_Type;
	};
}

#endif // SEQUENCETYPE_H