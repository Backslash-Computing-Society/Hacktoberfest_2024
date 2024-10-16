import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.atomic.AtomicInteger;

class Server {
    private String name;
    private String ip;
    private int port;

    public Server(String name, String ip, int port) {
        this.name = name;
        this.ip = ip;
        this.port = port;
    }

    public String getName() {
        return name;
    }

    public String getIp() {
        return ip;
    }

    public int getPort() {
        return port;
    }

    @Override
    public String toString() {
        return "Server{" +
                "name='" + name + '\'' +
                ", ip='" + ip + '\'' +
                ", port=" + port +
                '}';
    }
}

class LoadBalancer {
    private List<Server> servers;
    private AtomicInteger currentIndex;

    public LoadBalancer() {
        this.servers = new ArrayList<>();
        this.currentIndex = new AtomicInteger(0);
    }

    public void addServer(Server server) {
        this.servers.add(server);
    }

    public Server getNextServer() {
        int index = currentIndex.getAndIncrement() % servers.size();
        if (index < 0) {
            index = 0;
            currentIndex.set(0);
        }
        return servers.get(index);
    }
}

public class LoadBalancerDemo {
    public static void main(String[] args) {
        LoadBalancer loadBalancer = new LoadBalancer();

        // Add some sample servers
        loadBalancer.addServer(new Server("Server1", "192.168.0.1", 8080));
        loadBalancer.addServer(new Server("Server2", "192.168.0.2", 8080));
        loadBalancer.addServer(new Server("Server3", "192.168.0.3", 8080));

        // Simulate some requests
        for (int i = 0; i < 10; i++) {
            Server server = loadBalancer.getNextServer();
            System.out.println("Request " + (i + 1) + " routed to: " + server);
        }
    }
}
