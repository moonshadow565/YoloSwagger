using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchmakingMatchmakingDodgeData
    {
        [DataMember(Name = "dodgerId")]
        ulong DodgerId { get; set; }

        [DataMember(Name = "state")]
        LolMatchmakingMatchmakingDodgeState State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchmakingMatchmakingDodgeData {\n");
            sb.Append("  DodgerId: ").Append(DodgerId).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}