
/**
 * main
 */
public class Array {

        public static void main(String[] args) {
                CustomArray ar = new CustomArray(1, 2, 3, 4, 5);
                ar.push(6);
        
          ar.push(6);
           ar.push(5);
           ar.pop();
      
            
               
                System.out.println(ar.getLength());
                System.out.println(ar.toString());

        }

        public static class CustomArray {
                private int length = 0;
                private Object[] data;

                public CustomArray(Object... args) {

                        data = new Object[args.length];
                        for (int i = 0; i < args.length; i++) {
                                data[i] = args[i];
                        }

                        length = args.length;

                }

                public int getLength() {
                        return length;
                }

                public void push(Object element) {

                        if (data == null) {
                                data = new Object[1];
                                data[0] = element;
                                length = 1;
                        } else if (data.length < length + 1) {
                                int newSize = length + 1;

                                Object[] newData = new Object[newSize];

                                for (int i = 0; i < data.length; i++) {
                                        newData[i] = data[i];
                                }

                                newData[length] = element;
                                data = newData;
                        } else {
                                data[length] = element;
                        }

                        length++;
                }

                public void pop() {
                        if(length > 0){
                                data[--length] = null;
                        }
                }

                public String toString() {

                        String str = "";
                        for (int i = 0; i < length; i++) {
                                str = str.concat(data[i].toString());
                        }

                        return str;
                }

                public Object shift() {
                        if(length > 0) {

                                Object shiftedElement = data[0];
                                for (int i = 0; i < length; i++) {
                                        if (i+1 < data.length) {
                                                data[i] = data[i+1];
                                        }  
                                }
                               data[--length] = null;
                                return shiftedElement;
                        }
 
                        return null;
                }
                // public void unshift(Object element) {

                //         Object[] newAr = new Object[data.length];
                //         if(length > data.length) {
                //           for (int i = 1; i <= length; i++) {
                //                 data[i] = ;
                //            }

                //         }
                // }
        }

}