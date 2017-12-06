using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEndOfGameEndOfGameVictoriousComrade
    {
        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        string SummonerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEndOfGameEndOfGameVictoriousComrade {\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}