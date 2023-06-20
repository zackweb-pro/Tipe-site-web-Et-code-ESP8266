#include<ESP8266WiFi.h>
#include<ESP8266WebServer.h>

const char* ssid = "Zackweb";
const char* password = "Zakaria@@@2027";
ESP8266WebServer server(80);

void handleRoot(){
String page = "<!DOCTYPE html>";
page += "<html lang='en'>";
    page += "<head>";
        page += "    <meta charset='UTF-8'>";
        page += " <meta http-equiv='refresh' content='30'>";
        page += "  <meta name='viewport' content='width=device-width, initial-scale=1.0'>";
        page += "  <title>Stationnement intelligent</title>";
        page += "   <style>nav{display: flex; justify-content:center; align-items: center; background-color: #4C0058; color:white; margin: 0 0 40px 0; height: 70px; position: absolute; top: 0; right: 0; width: 100%;}img{display: block;margin: 40px auto;}table { margin: auto;font-family: arial, sans-serif;border-collapse: collapse;width: 100%;max-width: 600px;}td, th {border: 1px solid #2B3FF2;text-align: left;padding: 8px;}tr:nth-child(odd) { background-color: #dddddd;}button{background-color: #2B3FF2;border-radius: 6px;border: none;padding: .5rem 1rem;color: white;font-size: 20px;font-weight: bold;cursor: pointer;}</style>";
        page += "</head>";
        page += "<body>";
            page += "   <nav><h1>TIPE 2023</h1></nav>";
            page += "   <p style='margin: 70px;'></p>";
            page += "<h1 style='color: #2B3FF2;'>Stationnement Intelligent</h1>";

            page += "  <div style='visibility: hidden;'>"; page+= "1100"; page+="</div>";
            page += "  <script>";
       page += " let table = document.createElement('table');";
       page += "  let tr = document.createElement('tr');";
        page += " let th = document.createElement('th');";
        page += "  th.textContent = 'Numéro de place';";
        page += "   tr.appendChild(th);";
        page += "    th = document.createElement('th');";
        page += "   th.textContent = 'Statue';";
        page += "  tr.appendChild(th);";
        page += "  th = document.createElement('th');";
        page += "  th.textContent = 'réservation de la place';";
        page += "  tr.appendChild(th);";
        page += "  table.appendChild(tr);";
        page += "  var msg = document.querySelector('div');";
        page += "   val = msg.textContent.split('');";
        page += "   console.log(val);";
        page += "   val.forEach((e, i) => {";
            page += "         if(e == 1){creationTrReserver(i+1)} ";
            page += "    else{creationTrLibre(i+1)  } });";
            page += "     function creationTrLibre(n){";
                page += "         let tr = document.createElement('tr');";
                page += "         let td = document.createElement('td');";
                page += "          td.textContent = n;";
                page += "          tr.appendChild(td);";
                page += "           td = document.createElement('td');";
            page += "           td.textContent = 'Libre';";
            page += "          tr.appendChild(td);";
            page += "       let button = document.createElement('button');";
            page += "       button.textContent = 'reserver';";
            page += "     let a = document.createElement('a');";
            page += "     a.setAttribute('href', '/reservation' + n.toString());";
            page += "     a.appendChild(button);";
            page += "    td = document.createElement('td');";
            page += "  td.appendChild(a);";
            page += "  tr.appendChild(td);";
            page += "  table.appendChild(tr);";
            page += "  }";
            page += "  function creationTrReserver(n){";
                page += "  let tr = document.createElement('tr');";
                page += "   let td = document.createElement('td');";
                page += "   td.textContent = n;";
        page += "   tr.appendChild(td);";
        page += "  td = document.createElement('td');";
        page += "  td.textContent = 'réserver';";
        page += "  tr.appendChild(td);";
        page += "  td = document.createElement('td');";
        page += "  td.textContent = 'réserver';";
        page += "  tr.appendChild(td);";
        page += "  table.appendChild(tr);";
        page += "  }";
        page += "  console.log(table);";
        page += "  document.body.append(table);";
        page += "</script>";
        page += "</body>";
        page += "</html> ";
    server.setContentLength(page.length());
    server.send(200, "text/html", page);
}
void handleReservation1(){
  String page ="<!DOCTYPE html>";
page += "<html lang='en'>";
    page += "<head>";
        page += "   <meta charset='UTF-8'>";
        page += "   <meta name='viewport' content='width=device-width, initial-scale=1.0'>";
        page += "   <title>stationnement intelligent</title>";
        page += "  <style>nav{display: flex; justify-content:center; align-items: center; background-color: #4C0058; color:white; margin: 0 0 40px 0; height: 70px; position: absolute; top: 0; right: 0; width: 100%;}img{display: block;margin: 40px auto;}table { margin: auto;font-family: arial, sans-serif;border-collapse: collapse;width: 100%;max-width: 600px;}td, th {border: 1px solid #2B3FF2;text-align: left;padding: 8px;}tr:nth-child(odd) { background-color: #dddddd;}button{background-color: #2B3FF2;border-radius: 6px;border: none;padding: .5rem 1rem;color: white;font-size: 20px;font-weight: bold;cursor: pointer;}</style>";
        page += "</head>";
        page += "<body>";
            page += "   <nav><h1>TIPE 2023</h1></nav>";
            page += "   <p style='margin: 70px;'></p>";
            page += "  <p style='font-size: 20px; font-weight: bolder; text-align: center; margin: 30px;'>si vous êtes devant le parking vous pouvez l'ouvrir:</p>";
            page += "  <a href='/open'><button style='text-align: center; margin: auto; display: block;'>OUVRIR</button></a>";
            page += "</body>";
            page += "</html>";
    server.send(200, "text/html", page);

}
void handleReservation2(){
  String page ="<!DOCTYPE html>";
page += "<html lang='en'>";
    page += "<head>";
        page += "   <meta charset='UTF-8'>";
        page += "   <meta name='viewport' content='width=device-width, initial-scale=1.0'>";
        page += "   <title>stationnement intelligent</title>";
        page += "  <style>nav{display: flex; justify-content:center; align-items: center; background-color: #4C0058; color:white; margin: 0 0 40px 0; height: 70px; position: absolute; top: 0; right: 0; width: 100%;}img{display: block;margin: 40px auto;}table { margin: auto;font-family: arial, sans-serif;border-collapse: collapse;width: 100%;max-width: 600px;}td, th {border: 1px solid #2B3FF2;text-align: left;padding: 8px;}tr:nth-child(odd) { background-color: #dddddd;}button{background-color: #2B3FF2;border-radius: 6px;border: none;padding: .5rem 1rem;color: white;font-size: 20px;font-weight: bold;cursor: pointer;}</style>";
        page += "</head>";
        page += "<body>";
            page += "   <nav><h1>TIPE 2023</h1></nav>";
            page += "   <p style='margin: 70px;'></p>";
            page += "  <p style='font-size: 20px; font-weight: bolder; text-align: center; margin: 30px;'>si vous êtes devant le parking vous pouvez l'ouvrir:</p>";
            page += "  <a href='/open'><button style='text-align: center; margin: auto; display: block;'>OUVRIR</button></a>";
            page += "</body>";
            page += "</html>";
    server.send(200, "text/html", page);

}
void handleReservation3(){
  String page ="<!DOCTYPE html>";
page += "<html lang='en'>";
    page += "<head>";
        page += "   <meta charset='UTF-8'>";
        page += "   <meta name='viewport' content='width=device-width, initial-scale=1.0'>";
        page += "   <title>stationnement intelligent</title>";
        page += "  <style>nav{display: flex; justify-content:center; align-items: center; background-color: #4C0058; color:white; margin: 0 0 40px 0; height: 70px; position: absolute; top: 0; right: 0; width: 100%;}img{display: block;margin: 40px auto;}table { margin: auto;font-family: arial, sans-serif;border-collapse: collapse;width: 100%;max-width: 600px;}td, th {border: 1px solid #2B3FF2;text-align: left;padding: 8px;}tr:nth-child(odd) { background-color: #dddddd;}button{background-color: #2B3FF2;border-radius: 6px;border: none;padding: .5rem 1rem;color: white;font-size: 20px;font-weight: bold;cursor: pointer;}</style>";
        page += "</head>";
        page += "<body>";
            page += "   <nav><h1>TIPE 2023</h1></nav>";
            page += "   <p style='margin: 70px;'></p>";
            page += "  <p style='font-size: 20px; font-weight: bolder; text-align: center; margin: 30px;'>si vous êtes devant le parking vous pouvez l'ouvrir:</p>";
            page += "  <a href='/open'><button style='text-align: center; margin: auto; display: block;'>OUVRIR</button></a>";
            page += "</body>";
            page += "</html>";
    server.send(200, "text/html", page);

}
void handleReservation4(){
  String page ="<!DOCTYPE html>";
page += "<html lang='en'>";
    page += "<head>";
        page += "   <meta charset='UTF-8'>";
        page += "   <meta name='viewport' content='width=device-width, initial-scale=1.0'>";
        page += "   <title>stationnement intelligent</title>";
        page += "  <style>nav{display: flex; justify-content:center; align-items: center; background-color: #4C0058; color:white; margin: 0 0 40px 0; height: 70px; position: absolute; top: 0; right: 0; width: 100%;}img{display: block;margin: 40px auto;}table { margin: auto;font-family: arial, sans-serif;border-collapse: collapse;width: 100%;max-width: 600px;}td, th {border: 1px solid #2B3FF2;text-align: left;padding: 8px;}tr:nth-child(odd) { background-color: #dddddd;}button{background-color: #2B3FF2;border-radius: 6px;border: none;padding: .5rem 1rem;color: white;font-size: 20px;font-weight: bold;cursor: pointer;}</style>";
        page += "</head>";
        page += "<body>";
            page += "   <nav><h1>TIPE 2023</h1></nav>";
            page += "   <p style='margin: 70px;'></p>";
            page += "  <p style='font-size: 20px; font-weight: bolder; text-align: center; margin: 30px;'>si vous êtes devant le parking vous pouvez l'ouvrir:</p>";
            page += "  <a href='/open'><button style='text-align: center; margin: auto; display: block;'>OUVRIR</button></a>";
            page += "</body>";
            page += "</html>";
    server.send(200, "text/html", page);
}
void ouvrirbarrier(){
  // ldkjflka
}
void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("\n"); 
  WiFi.begin(ssid, password);
  Serial.print("tentation de cnx...");
  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(100);
  }
  Serial.println("\n");
  Serial.println("Connexion etablie!");
  Serial.print("Adress IP: ");
  Serial.println(WiFi.localIP());
  server.on("/", handleRoot);
  server.on("/reservation1", handleReservation1);
  server.on("/reservation2", handleReservation2);
  server.on("/reservation3", handleReservation3);
  server.on("/reservation4", handleReservation4);
  server.on("/open", ouvrirbarrier);
  server.begin();


}

void loop() {
  server.handleClient();
  char buffer[20] = "";
  if(Serial.available()> 0){
    // char data = Serial.read();
    Serial.readBytesUntil('\n', buffer, 20);
    Serial.println(buffer); 
  }
}
