using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyQueueRestrictionDto
    {
        [DataMember(Name = "gatekeeperRestrictions")]
        LolLobbyGatekeeperRestrictionDto[] GatekeeperRestrictions { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyQueueRestrictionDto {\n");
            sb.Append("  GatekeeperRestrictions: ").Append(GatekeeperRestrictions).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}